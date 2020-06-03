#include "inf.h"
#include "ui_inf.h"




inf::inf(chain chain, bracelet bracelet, QWidget *parent):
    QDialog(parent),
    ui(new Ui::inf)
{
    ui->setupUi(this);
    ui->chainname->setText(chain.getName());
    ui->chainmaterial->setText(chain.getMaterial());
    ui->chainw->setText(chain.getW());
    ui->bracw->setText(bracelet.getW());
    ui->bracname->setText(bracelet.getName());
    ui->bracmaterial->setText(bracelet.getMaterial());
    ui->label_8->setText(bracelet.getGemstone());
}

inf::~inf()
{
    delete ui;
}
