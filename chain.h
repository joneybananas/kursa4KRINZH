#ifndef CHAIN_H
#define CHAIN_H
#include "jewelry.h"


class chain : public jewelry
{
public:
    chain(QString name,QString material,
          int weight,double materialratio,
          double ka4estvo, double typreratio,QString pixx);
    double KASH() override;

    QPixmap getPix();
    QString getName();
    QString getMaterial();
    QString getW();

};

#endif // CHAIN_H
