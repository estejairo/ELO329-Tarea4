#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Imagenes Semaforos
    QPixmap sem1(":rojo.png");
    QPixmap sem3(":rojo.png");
    QPixmap semB(":rojopeaton.png");
    ui->sem1->setPixmap(sem1.scaled(51,81));
    ui->sem3->setPixmap(sem3.scaled(51,81));
    ui->semB->setPixmap(semB.scaled(51,81));


    //Timer
    timer= new QTimer(this);
    timerpaint=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(intersection()));
    connect(timerpaint,SIGNAL(timeout()),this,SLOT(painttraffics()));

    //Semaforos peatonales
    semaforopB = SemaforoP(greenTime, blinkingTime);

    //Semaforos vehiculares
    semaforo1 = TrafficLight(greenTime, blinkingTime);
    semaforo3 = TrafficLight(greenTime, blinkingTime);

    //Controlador
     ctrl = Controlador(&semaforopB,&semaforo1,&semaforo3);

    //INICIO Timer
     timerpaint->start(std::chrono::milliseconds(100));
     timer->start(std::chrono::milliseconds(1000));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::intersection()
{
    ctrl.manageTraffic();//Se opera el semaforo, atento a las señales del sensor
}

//Pinta los semaforos segun su estado
void MainWindow::painttraffics()
{
    QPixmap sem1V(":verdeizq.png");
    QPixmap sem1A(":amarillo.png");
    QPixmap sem1R(":rojo.png");
    QPixmap sem3V(":verde.png");
    QPixmap sem3A(":amarillo.png");
    QPixmap sem3R(":rojo.png");
    QPixmap semBV(":verdepeaton.png");
    QPixmap semBR(":rojopeaton.png");

    //sem1
    if(semaforo1.getState()==0){
        ui->sem1->setPixmap(sem1R.scaled(51,81));
    }
    else if(semaforo1.getState()==1){
        ui->sem1->setPixmap(sem1A.scaled(51,81));
    }
    else {
        ui->sem1->setPixmap(sem1V.scaled(51,81));
    }

    //sem3
    if(semaforo3.getState()==0){
        ui->sem3->setPixmap(sem3R.scaled(51,81));
    }
    else if(semaforo3.getState()==1){
        ui->sem3->setPixmap(sem3A.scaled(51,81));
    }
    else {
        ui->sem3->setPixmap(sem3V.scaled(51,81));
    }

    //semB
    if(semaforopB.getState()==0){
        ui->semB->setPixmap(semBV.scaled(51,81));
    }
    else if(semaforopB.getState()==1){
        if(blink){
            ui->semB->setPixmap(semBV.scaled(51,81));
            blink=false;
        }
        else {
            ui->semB->setPixmap(semBR.scaled(51,81));
            blink=true;
        }
    }
    else {
        ui->semB->setPixmap(semBR.scaled(51,81));
    }
}

