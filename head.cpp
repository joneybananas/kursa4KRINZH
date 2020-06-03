#include "head.h"


head::head(QString name,QString material,
             int weight, double materialratio,
             double ka4estvo, double typreratio, QString pixx)
{
    this->name=name ;
    this->material= material;
    this->weight = weight;
    this->materialratio=materialratio;
    this->ka4estvo = ka4estvo;
    this->typeratio=typreratio;
    pix = pixx;
}
QPixmap head::getPix()
{
    return pix;
}

QString head::getName()
{
    return  name;
}

QString head::getMaterial()
{
    return  material;
}

QString head::getW()
{
    return  QString::number(weight);
}

double head::KASH()
{
 int cash = weight*materialratio*(ka4estvo/10+1)*typeratio;
 return  cash;
}
