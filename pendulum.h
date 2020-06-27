//
// Created by alikp on 25.06.2020.
//

#ifndef PENDULUM_PENDULUM_H
#define PENDULUM_PENDULUM_H

#include "cmath"

bool right = false;
float l = 1.3;

float v0 = -2;
float h0 = 0.7 + 0.3;
float  forPendulum = 0.6;
float ZPendulum = 0; // крепление к струне по Z
float quantity = 1; // число маятников
float YPendulum = 0.6; // крепление к струне по Y

float XLeft = -1, XRight = 1; // крепление струны слева и справа
float g = 9.81, m = 1.5;
float T = m * g;
float F = 70;
float lengthToPendulum = (XRight - XLeft) / (quantity + 1);

class pendulum {
private:
    float x;
    float y;
    float z;

    float acceleration;
    float v;

    float dt;
public:
    pendulum(float y, float z, float v);
    void setV();
    void setAcceleration();
    void setPosition();
    float getV();
    float getAcceleration();
    float getX();
    float getY();
    float getZ();
};


#endif //PENDULUM_PENDULUM_H
