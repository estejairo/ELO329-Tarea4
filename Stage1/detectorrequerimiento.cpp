#include "detectorrequerimiento.h"

DetectorRequerimiento::DetectorRequerimiento(){
    state=false;
}

bool DetectorRequerimiento::isOn(){
    return state;
}
void DetectorRequerimiento::setOn(){
    state=true;
}
void DetectorRequerimiento::setOff(){
    state=false;
}
