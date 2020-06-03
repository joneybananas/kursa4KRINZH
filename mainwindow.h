#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <chain.h>
#include <bracelet.h>
#include <inf.h>
#include <head.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void add();
    ~MainWindow();

private slots:
    void on_UpdateButton_clicked();

    void on_pushButton_clicked();

private:

    Ui::MainWindow *ui;
    QVector<chain> chainmas;
    QVector <bracelet> bracmas;
    QVector <head> headmas;
    QPixmap headpix;
    QPixmap chainpix;
    QPixmap bracpix;
    int currentchain =0;
    int currentbrac =0;
    int currenthead =0;




};
#endif // MAINWINDOW_H
