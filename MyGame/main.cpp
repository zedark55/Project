#include "mainwindow.h"
#include <QtDebug>
#include <QApplication>
#include <QString>
#include <QLabel>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug()<< "Hello";
    return a.exec();
}
