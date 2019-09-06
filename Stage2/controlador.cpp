#include "controlador.h"
#include <thread>
#include <chrono>
#include <exception>

Controlador::Controlador()
{

}

Controlador::Controlador(SemaforoP *semaforopA, DetectorRequerimiento *botont, TrafficLight *semaforo1, TrafficLight *semaforo5){
    //Semaforos vehiculares
    sem1 = semaforo1;
    sem5 = semaforo5;
    //Semaforos peatonales
    semp1norteA = semaforopA;
    //Detectores de Requerimiento
    botonpeaton = botont;

    //Estado Inicial
    state = 1;
    sem5->turnFollow();
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
                state = 21;
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
        //Flujo de peatones cruzando 1 norte
        case 21:
            //Si se acaba el tiempo en verde se cambia de estado
            if (currentGreenTime >= semp1norteA->getGreenLightTime()){
                currentGreenTime = 1;
                state = 22;
                semp1norteA->turnGreenLightOff();
                sem1->turnTransition();
            }
            //Si no, se mantiene el estado
            else {
                currentGreenTime += 1;
            }
            break;
        //Transision para el flujo de peatones cruzando 1 norte
        case 22:
            //Si se acaba el tiempo de parpadeo del semaforo se cambia de estado
            if (currentYellowTime >= semp1norteA->getBlinkingTime()){
                currentYellowTime = 1;
                state = 1;
                semp1norteA->turnRedLightOn();
                sem1->turnStop();
                sem5->turnFollow();
            }
            //Si no, se mantiene el estado
            else {
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
            }
            //Si no, se mantiene el estado
            else {
                currentGreenTime += 1;
            }
            break;
        //Transicion del flujo de autos por sporting
        case 4:
            //Si se acaba el tiempo en verde, se cambia de estado
            if (currentYellowTime >= sem1->getTransitionTime()){
                currentYellowTime = 1;
                state = 1;
                sem1->turnStop();
                sem5->turnFollow();
            }
            //Si no, se mantiene el estado
            else {
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
