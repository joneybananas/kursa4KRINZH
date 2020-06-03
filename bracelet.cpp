#include "bracelet.h"


bracelet::bracelet(QString name, QString material,
                   QString gemstone, int gemstoneprice,
                   int weight, double materialratio,
                   double ka4estvo, double typreratio, QString pixx)
{
    this->name=name ;
    this->material= material;
    this->weight = weight;
    this->materialratio=materialratio;
    this->ka4estvo = ka4estvo;
    this->typeratio=typreratio;
    this->gemstone=gemstone;
    this->gemstoneprice = gemstoneprice;
    pix = pixx;
}

double bracelet::KASH()
{
    int cash = weight*materialratio*(ka4estvo/10+1)*typeratio;
    return  cash;
}

QPixmap bracelet::getPix()
{
    return  pix;
}

QString bracelet::getName()
{
    return  name;
}

QString bracelet::getMaterial()
{
    return  material;
}

QString bracelet::getGemstone()
{
    return  gemstone;
}

QString bracelet::getW()
{
    return QString::number(weight);
}
