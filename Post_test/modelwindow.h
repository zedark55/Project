#ifndef MODELWINDOW_H
#define MODELWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ModelWindow; }
QT_END_NAMESPACE

class ModelWindow : public QMainWindow
{
    Q_OBJECT

public:
    ModelWindow(QWidget *parent = nullptr);
    ~ModelWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ModelWindow *ui;
};
#endif // MODELWINDOW_H
