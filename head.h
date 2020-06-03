#ifndef HEAD_H
#define HEAD_H
#include "jewelry.h"

class head : public jewelry
{
public:
    head(QString name,QString material,
          int weight,double materialratio,
          double ka4estvo, double typreratio,QString pixx);
    double KASH() override;
    head();
    QPixmap getPix();
    QString getName();
    QString getMaterial();
    QString getW();
};

#endif // HEAD_H
