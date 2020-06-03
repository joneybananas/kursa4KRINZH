#include "chain.h"



chain::chain(QString name,QString material,
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

double chain::KASH()
{
 int cash = weight*materialratio*(ka4estvo/10+1)*typeratio;
 return  cash;
}

QPixmap chain::getPix()
{
    return pix;
}

QString chain::getName()
{
    return  name;
}

QString chain::getMaterial()
{
    return  material;
}

QString chain::getW()
{
    return  QString::number(weight);
}

