#include "modelwindow.h"
#include <TCircle.h>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelWindow w;
    w.show();
    return a.exec();
}
