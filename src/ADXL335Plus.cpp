#include <Arduino.h>

#include "ADXL335Plus.h"

ADXL335Plus::ADXL335Plus(int x, int y, int z){
    _x = x;
    _y = y;
    _z = z;
    pinMode(_x, INPUT);
    pinMode(_y, INPUT);
    pinMode(_z, INPUT);
}


void ADXL335Plus::rd(){
    X = analogRead(_x);
    Y = analogRead(_y);
    Z = analogRead(_z);
}

float ADXL335Plus::Ax(){
    rd();
    x_voltage = (float)X * ADC_REF / ADC_AMPLITUDE;
    _ax = (x_voltage - ZERO_X) / SENSITIVITY;
    return _ax;
}

float ADXL335Plus::Ay(){
    rd();
    y_voltage = (float)Y * ADC_REF / ADC_AMPLITUDE;
    _ay = (y_voltage - ZERO_Y) / SENSITIVITY;
    return _ay;
}

float ADXL335Plus::Az(){
    rd();
    z_voltage = (float)Z * ADC_REF / ADC_AMPLITUDE;
    _az = (z_voltage - ZERO_Z) / SENSITIVITY;
    return _az;
}
 
float ADXL335Plus::acceleration(
   rd();
    x_voltage = (float)X * ADC_REF / ADC_AMPLITUDE;
    _ax = (x_voltage - ZERO_X) / SENSITIVITY;
    y_voltage = (float)Y * ADC_REF / ADC_AMPLITUDE;
    _ay = (y_voltage - ZERO_Y) / SENSITIVITY;
    z_voltage = (float)Z * ADC_REF / ADC_AMPLITUDE;
    _az = (z_voltage - ZERO_Z) / SENSITIVITY;
    _a = sqrtf(powf(_ax,2)+powf(_ay,2)+powf(_az,2));
    return _a;
)