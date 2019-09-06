#include "semaforodegiro.h"

SemaforoDeGiro::SemaforoDeGiro(){

}

SemaforoDeGiro::SemaforoDeGiro(int greenTime, int blinkingTime)
{
    state=2;
    greenT=greenTime;
    blinkT=blinkingTime;
}

SemaforoDeGiro::~SemaforoDeGiro()
{
}

void SemaforoDeGiro::turnRedLightOn(){
    state=2;
}

void SemaforoDeGiro::turnGreenLightOn(){
    state=0;
}

void SemaforoDeGiro::turnGreenLightOff(){
    state=1;
}

int SemaforoDeGiro::getGreenLightTime(){
    return greenT;
}

int SemaforoDeGiro::getBlinkingTime(){
    return blinkT;
}

int SemaforoDeGiro::getState()
{
    return state;
}

std::ostream& operator<<(std::ostream& o, const SemaforoDeGiro& sem){
    if(sem.state==0){
        return o << "V";
    }
    else if(sem.state==2){
        return o << "R";
    }
    else{
        return o << "A";
    }
}
