#include "controlador.h"
#include <thread>
#include <chrono>
#include <exception>

Controlador::Controlador()
{

}

Controlador::Controlador(SemaforoP *semaforopB, TrafficLight *semaforo1, TrafficLight *semaforo3){
    //Semaforos vehiculares
    sem1 = semaforo1;
    sem3 = semaforo3;

    //Semaforos peatonales
    sempsportingB = semaforopB;

    //Estado Inicial
    state = 1;
    sem3->turnFollow();
    sempsportingB->turnGreenLightOn();
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
            //Si alguien quiere cruzar 1 norte se cambia de estado
            if ((currentGreenTime >= sem3->getFollowTime())){
                currentGreenTime = 1;
                state = 2;
                sem3->turnTransition();
                sempsportingB->turnGreenLightOff();//comienza el parpadeo
            }
            //Si no, se mantiene el estado
            else{
                currentGreenTime += 1;
            }
            break;
        //Transision para flujo de autos por 1 norte
        case 2:
            //Si se acabo el tiempo en amarillo, se cambia de estado
            if ((currentYellowTime >= sem3->getTransitionTime())){
                currentYellowTime = 1;
                state = 3;
                sem3->turnStop();
                sempsportingB->turnRedLightOn();
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
                sempsportingB->turnGreenLightOn();
                sem3->turnFollow();
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
