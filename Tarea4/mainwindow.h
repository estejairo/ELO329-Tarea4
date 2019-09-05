#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "semaforop.h"
#include "semaforodegiro.h"
#include "trafficlight.h"
#include "detectorrequerimiento.h"
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

private slots:
    void on_botonpeaton_clicked();
    void on_inductor_clicked();

private:
    QTimer *timer,*timerpaint;
    SemaforoP semaforopA;
    SemaforoP semaforopB;
    SemaforoDeGiro semaforog2,semaforog4;
    TrafficLight semaforo1,semaforo3,semaforo5;
    DetectorRequerimiento *botont, *sensorInd;
    Controlador ctrl;
    bool blink = false;
    int greenTime = 12;
    int blinkingTime = 6;
    void paintbuttonOn();
    void paintIndOn();
    void paintbuttonOff();
    void paintIndOff();
};

#endif // MAINWINDOW_H
