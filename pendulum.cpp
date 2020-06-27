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
    T = m*g/getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                     Vector3D(0, -1, 0, 0, 0, 0)) + m * v * v / l;
    acceleration = -T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                                                        Vector3D(0, -1, 0, 0, 0, 0)), 2));
    dt = 0.005;
}

void pendulum::setV() {
    this->v += this->acceleration * dt;
}

void pendulum::setAcceleration() {
    T = m*g/getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                     Vector3D(0, -1, 0, 0, 0, 0)) + m * v * v / l;
    if(right)
        this->acceleration = -T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                Vector3D(0, -1, 0, 0, 0, 0)), 2));
    else
        this->acceleration = T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum),
                                                                  Vector3D(0, -1, 0, 0, 0, 0)), 2));
    right = this->z >= 0;
    if (Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum).getLength() < l && (this->z > -0.03 && this->z < 0.03))
    {
        if(right)
            this->v = v0;
        else this->v = -v0;
    }
}

void pendulum::setPosition() {
    if(right)
        ZPendulum = ((m * g + m * v0 * v0 / l) / (2 * F) * lengthToPendulum) * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, 0),
                                                                                                                     Vector3D(0, -1, 0, 0, 0, 0)), 2));
    else ZPendulum = ((m * g + m * v0 * v0 / l) / (2 * F) * lengthToPendulum) * (-1) * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, 0),
                                                                                                                             Vector3D(0, -1, 0, 0, 0, 0)), 2));
    YPendulum = 0.7 - T /(2 * F) * lengthToPendulum;

    this->z += this->acceleration * dt*dt/2 + this->v * dt;
    this->y = YPendulum - l + (v0 * v0 / 2 - v * v / 2) / g;
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

