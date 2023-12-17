#include "mainwindow.h"
#include "application.h"



int main(int argc, char* argv[])
{
    UNIT1::Application App(argc, argv);
    UNIT1::MainWindow w;
    w.show();
    return App.exec();
}

