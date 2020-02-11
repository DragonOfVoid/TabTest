#include "tabstest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TabsTest w;
    w.show();

    return a.exec();
}
