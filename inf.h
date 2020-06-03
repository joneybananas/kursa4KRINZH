#ifndef INF_H
#define INF_H

#include <QDialog>
#include <chain.h>
#include <bracelet.h>

namespace Ui {
class inf;
}

class inf : public QDialog
{
    Q_OBJECT

public:
    explicit inf(chain chain,bracelet bracelet,QWidget *parent = nullptr);
    ~inf();

private:
    Ui::inf *ui;
};

#endif // INF_H
