#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QPixmap pix (":/resourec/img/timosh.jpg");
    int w = ui->Actorimg->width();
    int h = ui->Actorimg->height();
    ui->Actorimg->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    add();
    QPixmap heh(":/resourec/img/h3.png");

    for(int i=0;i<chainmas.size();i++){
        ui->chainBox->addItem(chainmas[i].getName());
    }
    for(int i=0;i<bracmas.size();i++){
        ui->braceletBox->addItem(bracmas[i].getName());
    }
    for(int i=0;i<headmas.size();i++){
        ui->headBox->addItem(headmas[i].getName());
    }
    //QPixmap pix2 (":/resourec/img/2.png");
    ui->head->setPixmap(headmas[0].getPix());
    ui->chain->setPixmap(chainmas[0].getPix());
    ui->bracelet->setPixmap(bracmas[0].getPix());

}

void MainWindow::add()
{
    chain chain2("lavrina","gold",50,3.0,5,1,":/resourec/img/4.png");
    chainmas.push_back(chain2);
    chain chainn("argo","silver",100,2.0,4,0.7,":/resourec/img/2.png");
    chainmas.push_back(chainn);
    bracelet brac ("vambrace","dota2","rubin",1488,30,1.8,8,1,":/resourec/img/7.png");
    bracmas.push_back(brac);
    bracelet brac2 ("kekW","gold","none",0,10,1.2,7,1.4,":/resourec/img/9.png");
    bracmas.push_back(brac2);
    head headd ("rap","текстиль",100,0.5,9,0.6,":/resourec/img/h1.png");
    headmas.push_back(headd);
    head h2 ("crown","gold",700,3,10,10,":/resourec/img/h2.png");
    headmas.push_back(h2);
    head h3 ("ushanka","текстиль",150,0.5,8,1,":/resourec/img/h3.png");
    headmas.push_back(h3);
    head h4 ("gopar'","текстиль",100,0.5,5,1,":/resourec/img/h4.png");
    headmas.push_back(h4);
    head h5 ("hasla","gold",300,3,7,2,":/resourec/img/h5.png");
    headmas.push_back(h5);
    bracelet b1 ("emo","leather","none",0,50,1,7,2,":/resourec/img/b1.png");
    bracmas.push_back(b1);
    bracelet b2("konfetka","konfetka","konfetka",40,0,0,0,0,":/resourec/img/b6.png");
    bracmas.push_back(b2);
    bracelet b3 ("hasla","gold","none",0,100,3,7,2,":/resourec/img/b7.png");
    bracmas.push_back(b3);
    chain c1 ("hasla","gold",200,3,7,2,":/resourec/img/c4.png");
    chainmas.push_back(c1);
    chain c2 ("rap","gold",250,4,10,2,":/resourec/img/c5.png");
    chainmas.push_back(c2);

    chainmas.push_back(c1);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_UpdateButton_clicked()
{
  // int chainindex= ui->chainBox->currentIndex();
  // int bracindex=ui->braceletBox->currentIndex();
    currenthead = ui->headBox->currentIndex();
   currentchain = ui->chainBox->currentIndex();
   currentbrac =  ui->braceletBox->currentIndex();
   bracpix = bracmas[currentbrac].getPix();
   chainpix = chainmas[currentchain].getPix();
   headpix = headmas[currenthead].getPix();
   ui->head->setPixmap(headpix);
   ui->chain->setPixmap(chainpix);
   ui->bracelet->setPixmap(bracpix);
   int k = chainmas[currentchain].KASH()+bracmas[currentbrac].KASH()+headmas[currenthead].KASH();
   QString f ="Total price: "+QString::number(k);

   ui->label->setText(f);


}

void MainWindow::on_pushButton_clicked()
{
   inf dial(chainmas[currentchain],bracmas[currentbrac],this);
   dial.exec();
}
