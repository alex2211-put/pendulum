//
// Created by alikp on 25.06.2020.
//

#include "pendulum.h"
#include "Vector3D.cpp"
pendulum::pendulum(float y, float z, float v) {
    this->x = 0;
    this->y = y;
    this->z = z;

    this->v = v;
    acceleration = -T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                                                        Vector3D(0, -1, 0, 0, 0, 0)), 2));
    dt = 0.001;
}

void pendulum::setV() {
    this->v += this->acceleration * dt;
}

void pendulum::setAcceleration() {
    if(right)
        this->acceleration = -T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                Vector3D(0, -1, 0, 0, 0, 0)), 2));
    else
        this->acceleration = T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                                                                  Vector3D(0, -1, 0, 0, 0, 0)), 2));
    if(std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                                       Vector3D(0, -1, 0, 0, 0, 0)), 2)) < 0.002 && cost == 0)
    {
        right = !right;
        cost++;
    }
    if(abs(this->z) > 0.05)
        cost = 0;
}

void pendulum::setPosition() {
    this->z += this->acceleration * dt*dt/2 + this->v * dt;
    this->y = -std::sqrt(1 - this->z * this->z) + 0.7;
}

float pendulum::getV() {
    return v;
}

float pendulum::getAcceleration() {
    return acceleration;
}

float pendulum::getX() {
    return x;
}

float pendulum::getY() {
    return y;
}

float pendulum::getZ() {
    return z;
}

