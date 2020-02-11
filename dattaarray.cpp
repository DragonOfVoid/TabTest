#include "dattaarray.h"

DattaArray::DattaArray()
{
    QStringList tmp = {"Gosha","Ivan","Olya"};
    List tmpL;
    tmpL.name="Names";
    tmpL.item.append(tmp);
    Base.append(tmpL);

    tmp.clear();
    tmpL.item.clear();
    tmp <<"Vasilev"<<"Gotsko"<<"Medvedeva"<<"Loginova";
    tmpL.name="Sutnames";
    tmpL.item.append(tmp);
    Base.append(tmpL);

    tmp.clear();
    tmpL.item.clear();
    tmp <<"Vladislavovich"<<"Ivanovich";
    tmpL.name="Patronymics ";
    tmpL.item.append(tmp);
    Base.append(tmpL);
}

QString DattaArray::ListName(int i)
{
    return Base.at(i).name;
}

QString DattaArray::ItemName(int iI, int iL)
{
    return Base.at(iL).item.at(iI);
}

int DattaArray::length(int i)
{
    if(i==-1)
        return Base.length();
    else
        return Base.at(i).item.length();

}

void DattaArray::AddItem(QString name, int i)
{
    List tmp = Base.at(i);
    tmp.item<<name;
    Base.replace(i,tmp);
}

void DattaArray::AddList(QString name)
{
    List tmp;
    tmp.name = name;
    Base<< tmp;
}

void DattaArray::RemoveItem(int iI, int iL)
{
    List tmp = Base.at(iL);
    tmp.item.removeAt(iI);
    Base.replace(iL,tmp);
}
