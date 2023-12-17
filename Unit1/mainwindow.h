#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace UNIT1 {

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual~MainWindow();
};
} //namespace UNIT1
#endif // MAINWINDOW_H
