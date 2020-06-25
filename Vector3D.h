//
// Created by alikp on 25.06.2020.
//

#ifndef PENDULUM_VECTOR3D_H
#define PENDULUM_VECTOR3D_H


#include <cmath>

class Vector3D
{
private:
    double x;  //координаты вектора на плоскости
    double y;
    double z;

public:
    Vector3D(); //конструктор вектора по умолчанию, задающий ему координаты (0; 0)
    Vector3D(float xk, float yk, float zk, float xn, float yn, float zn);  //просто конструктор вектора (х; у)
    ~Vector3D();  //деструктор вектора (делаем его нулевым)

    double getX() const;  //получаем координату по х, ни в коем случае не меняя её
    double getY() const;  //аналогично для у
    double getZ() const;  //и для z

    void setX(double x);  //задаём координату по х
    void setY(double y);  //задаём координату по у
    void setZ(double z);  //задаём координату по z
    double getLength() const;  // узнаём длину вектора

};
double getAngle(Vector3D v3, Vector3D v2);  //получаем угол между двумя векторами


#endif //PENDULUM_VECTOR3D_H
