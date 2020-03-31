#ifndef __ADXL335Plus_H__
#define __ADXL335Plus_H__

 #include <Arduino.h>
 #include <math.h>

#define ADC_AMPLITUDE 1024
#define ADC_REF 5  
#define ZERO_X  1.75
#define ZERO_Y  1.73
#define ZERO_Z  2.11
#define SENSITIVITY 0.25

class ADXL335Plus {

    public:
       ADXL335Plus(int,int,int);
       void rd();     
       float acceleration();
       float Ax();
       float Ay();
       float Az();
    private:
     
     int X,Y,Z;
     int _x,_y,_z;

     float _ax,_ay,_az;
     float x_voltage,y_voltage,z_voltage;

     float _a;
};

#endif