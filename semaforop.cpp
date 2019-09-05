#include "semaforop.h"
#include<QObject>
SemaforoP::SemaforoP(){

}

SemaforoP::SemaforoP(int greenTime, int blinkingTime)
{
    red=true;
    greenT=greenTime;
    blinkT=blinkingTime;
}

SemaforoP::~SemaforoP()
{
}

void SemaforoP::turnRedLightOn(){
    red=true;
    green=false;

}

void SemaforoP::turnGreenLightOn(){
    green=true;
    red=false;
}

void SemaforoP::turnGreenLightOff(){
    green=false;
}

int SemaforoP::getGreenLightTime(){
    return greenT;
}

int SemaforoP::getBlinkingTime(){
    return blinkT;
}

int SemaforoP::getState()
{
    if(green){
        return 0;//verde
    }
    else if (!red&&!green) {
        return 1; //amarillo
    }
    else {
        return 2; //rojo
    }
}

std::ostream& operator<<(std::ostream& o, const SemaforoP& sem){
    if(sem.green){
        return o << "V";
    }
    else if(sem.red){
        return o << "R";
    }
    else{
        return o << "P";
    }
}
