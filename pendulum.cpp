//
// Created by alikp on 25.06.2020.
//

#include "pendulum.h"
#include "Vector3D.cpp"
pendulum::pendulum(float z, float v, int schet) {
    this->schet = schet;
    this->x = XLeft + lengthToPendulum * this->schet;
    this->y = stringMountY - l + (v0 * v0 / 2 - v * v / 2) / g;
    this->z = z;

    this->stringMountY = 0.6;
    this->stringMountZ = 0;

    this->v = v;
    this->T = m*g/getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, this->stringMountZ),
                     Vector3D(0, -1, 0, 0, 0, 0)) + m * v * v / l;
    acceleration = -this->T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, this->stringMountZ),
            Vector3D(0, -1, 0, 0, 0, 0)), 2));
    this->right = this->z >= 0;
    this->v0 = v;
    dt = 0.009;
}

void pendulum::setV() {
    this->v += this->acceleration * dt;
}

void pendulum::setAcceleration() {
    this->T = m*g/getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, this->stringMountZ),
                     Vector3D(0, -1, 0, 0, 0, 0)) + m * v * v / l;
    if(this->right)
        this->acceleration = -this->T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, this->stringMountZ),
                Vector3D(0, -1, 0, 0, 0, 0)), 2));
    else
        this->acceleration = this->T * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, this->stringMountZ),
                                                                  Vector3D(0, -1, 0, 0, 0, 0)), 2));
    this->right = this->z >= 0;
    if (Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, this->stringMountZ).getLength() < l && (this->z > -0.03 && this->z < 0.03))
    {
        if (schet == 1)
            std::cout << 1 << std::endl;
        else std::cout << 2 << std::endl;
        if (v0 < 0) {
            if (this->right)
                this->v = v0;
            else this->v = -v0;
        }
        else
        {
            if (this->right)
                this->v = -v0;
            else this->v = v0;
        }
    }
}

void pendulum::setPosition() {
    if(this->right)
        stringMountZ = ((m * g + m * v0 * v0 / l) / (2 * F) * lengthToPendulum) * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, 0),
                                                                                                                     Vector3D(0, -1, 0, 0, 0, 0)), 2));
    else stringMountZ = ((m * g + m * v0 * v0 / l) / (2 * F) * lengthToPendulum) * (-1) * std::sqrt(1 - std::pow(getAngle(Vector3D(this->x, this->y, this->z, XLeft + lengthToPendulum * this->schet, this->stringMountY, 0),
                                                                                                                             Vector3D(0, -1, 0, 0, 0, 0)), 2));
    stringMountY = 0.7 - this->T /(2 * F) * lengthToPendulum;

    this->z += this->acceleration * dt*dt/2 + this->v * dt;
    this->y = stringMountY - l + (v0 * v0 / 2 - v * v / 2) / g;
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

float pendulum::getStringMountY() {
    return stringMountY;
}

float pendulum::getStringMountZ() {
    return stringMountZ;
}

