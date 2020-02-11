#ifndef TABSTEST_H
#define TABSTEST_H

#include <QWidget>
#include "qlistwidget.h"
#include "dattaarray.h"


namespace Ui {
class TabsTest;
}

class TabsTest : public QWidget
{
    Q_OBJECT

public:
    explicit TabsTest(QWidget *parent = nullptr);
    ~TabsTest();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TabsTest *ui;
    QListWidget **Lists;
    DattaArray *data;

    void SetupData();
    void SetupTabs();
    void SetupLists();

    bool SU=1;


};

#endif // TABSTEST_H
