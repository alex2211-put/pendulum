//
// Created by alikp on 25.06.2020.
//

#ifndef PENDULUM_PENDULUM_H
#define PENDULUM_PENDULUM_H

#include "cmath"

float l = 1.3;


float h0 = 0.7 + 0.3;
float quantity = 2; // число маятников
//float YPendulum = 0.6; // крепление к струне по Y

float XLeft = -1, XRight = 1; // крепление струны слева и справа
float g = 9.81, m = 0.5;
float F = 70;
float lengthToPendulum = (XRight - XLeft) / (quantity + 1);

class pendulum {
private:
    float x;
    float y;
    float z;

    float stringMountY;
    float stringMountZ;

    float T;

    float acceleration;
    float v;
    float v0;

    bool right;

    int schet;
    float dt;
public:
    pendulum(float z, float v, int schet);
    void setV();
    void setAcceleration();
    void setPosition();
    float getV();
    float getAcceleration();
    float getX();
    float getY();
    float getZ();
    float getStringMountY();
    float getStringMountZ();
};


#endif //PENDULUM_PENDULUM_H
