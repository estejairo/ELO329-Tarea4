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
    QPixmap sem5(":rojo.png");
    QPixmap semA(":rojopeaton.png");
    ui->sem1->setPixmap(sem1.scaled(51,81));
    ui->sem5->setPixmap(sem5.scaled(51,81));
    ui->semA->setPixmap(semA.scaled(51,81));

    //Imagenes Botones
    //-------Peatonal----
    paintbuttonOff();

    //Timer
    timer= new QTimer(this);
    timerpaint=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(intersection()));
    connect(timerpaint,SIGNAL(timeout()),this,SLOT(painttraffics()));

    //Semaforos peatonales
    semaforopA = SemaforoP(greenTime, blinkingTime);

    //Semaforos vehiculares
    semaforo1 = TrafficLight(greenTime, blinkingTime);
    semaforo5 = TrafficLight(greenTime, blinkingTime);

    //Detector de requerimiento
    botont = new DetectorRequerimiento();

    //Controlador
     ctrl = Controlador(&semaforopA,botont,&semaforo1,&semaforo5);

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

void MainWindow::on_botonpeaton_clicked()
{
    paintbuttonOn();
    botont->setOn();
}

void MainWindow::paintbuttonOn()
{
    QPixmap Bpeaton(":OnButton.png");
    QIcon ButtonIconPeaton(Bpeaton);
    ui->botonpeaton->setIcon(ButtonIconPeaton);
    ui->botonpeaton->setIconSize(QSize(91,71));
}

void MainWindow::paintbuttonOff()
{
    QPixmap Bpeatonoff(":OffButton.png");
    QIcon ButtonIconPeatonoff(Bpeatonoff);
    ui->botonpeaton->setIcon(ButtonIconPeatonoff);
    ui->botonpeaton->setIconSize(QSize(91,71));
}

//Pinta los semaforos segun su estado
void MainWindow::painttraffics()
{
    QPixmap sem1V(":verdeizq.png");
    QPixmap sem1A(":amarillo.png");
    QPixmap sem1R(":rojo.png");
    QPixmap sem5V(":verdearriba.png");
    QPixmap sem5A(":amarillo.png");
    QPixmap sem5R(":rojo.png");
    QPixmap semAV(":verdepeaton.png");
    QPixmap semAR(":rojopeaton.png");
    //botones
    if(!botont->isOn()){
        paintbuttonOff();
    }

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
    //sem5
    if(semaforo5.getState()==0){
        ui->sem5->setPixmap(sem5R.scaled(51,81));
    }
    else if(semaforo5.getState()==1){
        ui->sem5->setPixmap(sem5A.scaled(51,81));
    }
    else {
        ui->sem5->setPixmap(sem5V.scaled(51,81));
    }
    //semA
    if(semaforopA.getState()==0){
        ui->semA->setPixmap(semAV.scaled(51,81));
    }
    else if(semaforopA.getState()==1){
        if(blink){
            ui->semA->setPixmap(semAV.scaled(51,81));
            blink=false;
        }
        else {
            ui->semA->setPixmap(semAR.scaled(51,81));
            blink=true;
        }
    }
    else {
        ui->semA->setPixmap(semAR.scaled(51,81));
    }
}

