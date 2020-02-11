#ifndef DATTAARRAY_H
#define DATTAARRAY_H


#include "qstringlist.h"
#include "qlist.h"

class DattaArray
{
public:
    DattaArray();

    struct List{
        QStringList item;
        QString name;
    };
    QList<List> Base;

    QString ListName(int i);
    QString ItemName(int iI, int iL);
    int length(int i);
    void AddItem(QString name, int i);
    void AddList(QString name);
    void RemoveItem(int iI, int iL);


};

#endif // DATTAARRAY_H
