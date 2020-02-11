#include "tabstest.h"
#include "ui_tabstest.h"

TabsTest::TabsTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TabsTest)
{

    ui->setupUi(this);
    data = new DattaArray;
    SetupTabs();
}

TabsTest::~TabsTest()
{
    delete ui;
}



void TabsTest::SetupTabs()
{
    if(SU==1)
        SU=0;
    else
        delete Lists;

    Lists = new QListWidget*[data->length(-1)];
    ui->tabWidget->clear();
    for(int i=0;i<data->length(-1);i++)
    {
        QListWidget *tmp = new QListWidget;
        Lists[i]=tmp;
        ui->tabWidget->addTab(tmp,data->ListName(i));
    }
    SetupLists();
}

void TabsTest::SetupLists()
{
    for(int i=0;i<data->length(-1);i++)
    {
        Lists[i]->clear();
        for(int j=0;j<data->length(i);j++)
        {
            Lists[i]->addItem(data->ItemName(j,i));
        }
    }
}

void TabsTest::on_pushButton_clicked()
{
    data->AddItem(ui->lineEdit->text(),ui->tabWidget->currentIndex());
    SetupLists();
}

void TabsTest::on_pushButton_2_clicked()
{
    data->AddList(ui->lineEdit_2->text());
    SetupTabs();
}

void TabsTest::on_pushButton_3_clicked()
{
    if(ui->tabWidget->currentIndex()!=-1)
    {
        data->RemoveItem(Lists[ui->tabWidget->currentIndex()]->currentRow(),ui->tabWidget->currentIndex());
        SetupLists();
    }
}
