#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "semaforop.h"
#include "trafficlight.h"

class Controlador
{
private:
    SemaforoP *sempsportingB;
    TrafficLight *sem3,*sem1;
    int state = 1;
    int currentGreenTime=1;
    int currentYellowTime=1;
public:
    Controlador();
    Controlador(SemaforoP *semaforopB, TrafficLight *semaforo1, TrafficLight *semaforo3);
    ~Controlador();
    void manageTraffic();
    int getstate();
};

#endif // CONTROLADOR_H
