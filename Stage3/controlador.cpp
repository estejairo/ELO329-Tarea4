#include "controlador.h"
#include <thread>
#include <chrono>
#include <exception>

Controlador::Controlador()
{

}

Controlador::Controlador(SemaforoP *semaforopA, SemaforoDeGiro *semaforog4, DetectorRequerimiento *botont, DetectorRequerimiento *sensorInd, TrafficLight *semaforo1, TrafficLight *semaforo5){
    //Semaforos vehiculares
    sem1 = semaforo1;
    sem5 = semaforo5;
    //Semaforos de Giro
    semg4 = semaforog4;
    //Semaforos peatonales
    semp1norteA = semaforopA;
    //Detectores de Requerimiento
    sensorinductivo = sensorInd;
    botonpeaton = botont;

    //Estado Inicial
    state = 1;
    sem5->turnFollow();
    semg4->turnRedLightOn();
    semp1norteA->turnRedLightOn();
    sem1->turnStop();
}

Controlador::~Controlador()
{
}

//Metodo que opera las luces del semaforo segun los requerimientos del sensor
void Controlador::manageTraffic(){
    switch (state){
        //Flujo de autos por 1 norte
        case 1:
            //Si alguien quiere cruzar 1 norte o se acaba el tiempo en verde de 1 norte se cambia de estado
            if (botonpeaton->isOn()||(currentGreenTime >= sem5->getFollowTime())){
                currentGreenTime = 1;
                state = 2;
                sem5->turnTransition();
            }
            //Si no, se mantiene el estado
            else{
                currentGreenTime += 1;
            }
            break;
        //Transision para flujo de autos por 1 norte
        case 2:
            //Si alguien queria cruzar y ya se acabo el tiempo en amarillo, se cambia de estado
            if (botonpeaton->isOn()&&(currentYellowTime >= sem5->getTransitionTime())){
                botonpeaton->setOff();
                currentYellowTime = 1;
                state = 3;
                sem5->turnStop();
                semp1norteA->turnGreenLightOn();
                sem1->turnFollow();
            }
            //Si se acabo el tiempo en amarillo, se cambia de estado
            else if ((currentYellowTime >= sem5->getTransitionTime())){
                currentYellowTime = 1;
                state = 3;
                sem5->turnStop();
                sem1->turnFollow();
            }
            //Si no, se mantiene el estado
            else{
                currentYellowTime += 1;
            }
            break;
        //Flujo de autos por sporting
        case 3:
            //Si se acaba el tiempo en verde, se cambia de estado
            if (currentGreenTime >= sem1->getFollowTime()){
                currentGreenTime = 1;
                state = 4;
                sem1->turnTransition();
                semp1norteA->turnGreenLightOff();
            }
            //Si no, se mantiene el estado
            else {
                currentGreenTime += 1;
            }
            break;
        //Transicion del flujo de autos por sporting
        case 4:
            //Si un auto desea virar desde 1 norte a sporting y ya se acabo el tiempo en amarillo
            if (sensorinductivo->isOn()&&(currentYellowTime >= sem1->getTransitionTime())){
                sensorinductivo->setOff();
                currentYellowTime = 1;
                state = 41;
                sem1->turnStop();
                sem5->turnFollow();
                semp1norteA->turnRedLightOn();
                semg4->turnGreenLightOn();
            }
            //Si se acaba el tiempo en verde, se cambia de estado
            else if (currentYellowTime >= sem1->getTransitionTime()){
                currentYellowTime = 1;
                state = 1;
                sem1->turnStop();
                sem5->turnFollow();
                semp1norteA->turnRedLightOn();
            }
            //Si no, se mantiene el estado
            else {
                currentYellowTime += 1;
            }
            break;
        //Viraje de autos desde 1 norte hacia sporting
        case 41:
            //Si se acaba el tiempo en verde
            if (currentGreenTime >= semg4->getGreenLightTime()){
                currentGreenTime = 1;
                state = 42;
                semg4->turnGreenLightOff();
            }
            //Si no, se mantiene el estado
            else{
                currentGreenTime += 1;
            }
            break;
        //Transicion de viraje de autos desde 1 norte hacia sporting
        case 42:
            //Si se acaba el tiempo en parpadeo
            if (currentYellowTime >= semg4->getBlinkingTime()){
                currentYellowTime = 1;
                state = 1;
                semg4->turnRedLightOn();
            }
            //Si no, se mantiene el estado
            else{
                currentYellowTime += 1;
            }
            break;
        default:
            std::cout<<"\n Error, estado no existente!"<<std::endl;
    }
}

int Controlador::getstate()
{
    return state;
}
