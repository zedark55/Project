#include "modelwindow.h"
#include "ui_modelwindow.h"
#include "TCircle.h"
#include <QDebug>

ModelWindow::ModelWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ModelWindow)
{
    ui->setupUi(this);
}

ModelWindow::~ModelWindow()
{
    delete ui;
}


void ModelWindow::on_pushButton_clicked()
{
    ui->plainTextEdit->setPlainText("Бугагашенька");
progressia s1;
s1.SetX1(6);
s1.SetD(15);
s1.SetN(25);
int result;
result = s1.GetP(6);
qDebug()<<"член"<<result;
summ s2;
int p[5];
p[0]= 10;
p[1]= 11;
p[2]=1;
p[3]= 8;
p[4]=10;
s2.SetMass(p,5);
int res;
res = s2.GetSum();
qDebug()<<"член1"<<res;
TTest test1;
qDebug()<<test1.GetX()<<endl;
TTest test2 (100);
qDebug()<<test2.GetX()<<endl;
}

