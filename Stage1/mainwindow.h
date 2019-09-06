#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "semaforop.h"
#include "trafficlight.h"
#include "controlador.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void intersection();
    void painttraffics();

private:
    QTimer *timer,*timerpaint;
    SemaforoP semaforopA;
    SemaforoP semaforopB;
    TrafficLight semaforo1,semaforo3;
    Controlador ctrl;
    bool blink = false;
    int greenTime = 12;
    int blinkingTime = 6;
};

#endif // MAINWINDOW_H
