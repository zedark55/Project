#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QtDebug"
#include "QPixmap"
#include "QDesktopWidget"
#include "QGraphicsDropShadowEffect"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //==============================================================================================
    //Установил краба на фон главного меню
       /*QPixmap bkgnd(":/img/image/MainWindow.jpg");
       bkgnd = bkgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
       QPalette palette;
       palette.setBrush(QPalette::Background, bkgnd);
       this->setPalette(palette);*/
    //==============================================================================================
    //Масштабируемый экран
     QRect rect = frameGeometry();
     QDesktopWidget desktop;
     rect.setHeight(desktop.availableGeometry(this).height()*.9);
     rect.setWidth(desktop.availableGeometry(this).width()*.9);
     rect.moveCenter(desktop.availableGeometry(this).center());
     move(rect.topLeft());
     this->setGeometry(rect);
    //==============================================================================================
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Exit_clicked()
{
   QMessageBox::StandardButton exit =  QMessageBox::question(this,"Выход" ,"Вы действительно хотите выйти из игры?",
                                                             QMessageBox::Yes | QMessageBox::No);
   if (exit == QMessageBox::Yes){
       QApplication::quit();
   }
}

void MainWindow::paintEvent(QPaintEvent *)
{

}

