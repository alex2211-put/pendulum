//
// Created by alikp on 25.06.2020.
//

#include "Vector3D.h"
Vector3D::Vector3D()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
};


Vector3D::~Vector3D()
{
    x = 0;
    y = 0;
    z = 0;
};

double Vector3D::getX() const
{
    return x;
};

double Vector3D::getY() const
{
    return y;
};

double Vector3D::getZ() const
{
    return z;
};

void Vector3D::setX(double x)
{
    this->x = x;
};

void Vector3D::setY(double y)
{
    this->y = y;
};

void Vector3D::setZ(double z)
{
    this->z = z;
};

double scalarProduct(Vector3D v2, Vector3D v3)
{
    return (v3.getX() * v2.getX() + v3.getY() * v2.getY() + v3.getZ() * v2.getZ());
};

double getAngle(Vector3D v3, Vector3D v2)
{
    return (scalarProduct(v3, v2) / (v3.getLength() * v2.getLength()));
};
double Vector3D::getLength() const
{
    return sqrt(x * x + y * y + z * z);
}

Vector3D::Vector3D(float xk, float yk, float zk, float xn, float yn, float zn) {
    this->x = xk - xn;
    this->y = yk - yn;
    this->z = zk - zn;
}

