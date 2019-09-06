#ifndef SEMAFOROP_H
#define SEMAFOROP_H

#include <iostream>

class SemaforoP
{
public:
    SemaforoP();
    SemaforoP(int greenTime, int blinkingTime);
    ~SemaforoP();
    void turnRedLightOn();
    void turnGreenLightOn();
    void turnGreenLightOff();
    int getGreenLightTime();
    int getBlinkingTime();
    int getState();
private:
    int greenT,blinkT;
    bool red,green;
    friend std::ostream& operator<<(std::ostream&, const SemaforoP&);
};

#endif // SEMAFOROP_H
