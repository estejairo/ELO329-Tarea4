#ifndef DETECTORREQUERIMIENTO_H
#define DETECTORREQUERIMIENTO_H


class DetectorRequerimiento
{
private:
    bool state;
public:
    DetectorRequerimiento();
    bool isOn();
    void setOn();
    void setOff();
};

#endif // DETECTORREQUERIMIENTO_H
