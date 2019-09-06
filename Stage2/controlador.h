#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "semaforop.h"
#include "trafficlight.h"
#include "detectorrequerimiento.h"

class Controlador
{
private:
    DetectorRequerimiento *sensorinductivo,*botonpeaton;
    SemaforoP *semp1norteA;
    TrafficLight *sem5,*sem1;
    int state = 1;
    int currentGreenTime=1;
    int currentYellowTime=1;
public:
    Controlador();
    Controlador(SemaforoP *semaforopA, DetectorRequerimiento *botont, TrafficLight *semaforo1, TrafficLight *semaforo5);
    ~Controlador();
    void manageTraffic();
    int getstate();
};

#endif // CONTROLADOR_H
