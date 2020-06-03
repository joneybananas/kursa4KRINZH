#ifndef JEWELRY_H
#define JEWELRY_H
#include <QString>
#include <QPixmap>

class jewelry
{
public:
    jewelry();
   virtual double KASH()=0;
protected:
    QString name;
    QString material;
    int weight;
    double materialratio;
    double ka4estvo;
    double typeratio;
    QPixmap pix;
};

#endif // JEWELRY_H
