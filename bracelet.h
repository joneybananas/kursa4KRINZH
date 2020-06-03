#ifndef BRACELET_H
#define BRACELET_H
#include "jewelry.h"

class bracelet :public jewelry
{
public:
    bracelet(QString name,QString material,
             QString gemstone, int gemstoneprice,
             int weight,double materialratio,
             double ka4estvo, double typreratio,QString pixx);
    double KASH() override;
     QPixmap getPix();
     QString getName();
     QString getMaterial();
     QString getGemstone();
     QString getW();

private:
   QString gemstone;
   int gemstoneprice;

  // int gemstonepriсe;
};

#endif // BRACELET_H
