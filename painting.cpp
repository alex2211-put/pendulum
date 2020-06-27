//
// Created by alikp on 25.06.2020.
//


pendulum a(YPendulum - h0, 0, v0);


void paintPolygon()
{
    glBegin(GL_POLYGON);  //начинаем рисовать грань
    glColor3f(1, 0, 0);
    glVertex3f(XLeft, -0.7, -0.1);  //здесь и далее сначала цвет
    glColor3f(0, 0, 1);
    glVertex3f(XLeft + 0.1, -0.7, -0.1);  //(красный, зеленый, синий, прозрачность)
    glColor3f(0, 1, 0);
    glVertex3f(XLeft + 0.1, 0.7, -0.1);  //потом идет положение точки
    glColor3f(1, 1, 0);
    glVertex3f(XLeft, 0.7, -0.1);  //4 точки - 1 грань
    glEnd();  //закончили рисовать одну грань

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XLeft, -0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XLeft + 0.1, -0.7, -0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XLeft + 0.1, -0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XLeft, -0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XLeft, -0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XLeft + 0.1, 0.7, -0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XLeft + 0.1, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XLeft + 0.1, -0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XLeft + 0.1, 0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XLeft, 0.7, -0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XLeft + 0.1, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XLeft, 0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XLeft, -0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XLeft, -0.7, 0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XLeft, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XLeft, 0.7, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XLeft, -0.7, 0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XLeft + 0.1, -0.7, 0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XLeft + 0.1, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XLeft, 0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);  //начинаем рисовать грань
    glColor3f(1, 0, 0);
    glVertex3f(XRight, -0.7, -0.1);  //здесь и далее сначала цвет
    glColor3f(0, 0, 1);
    glVertex3f(XRight - 0.1, -0.7, -0.1);  //(красный, зеленый, синий, прозрачность)
    glColor3f(0, 1, 0);
    glVertex3f(XRight - 0.1, 0.7, -0.1);  //потом идет положение точки
    glColor3f(1, 1, 0);
    glVertex3f(XRight, 0.7, -0.1);  //4 точки - 1 грань
    glEnd();  //закончили рисовать одну грань

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XRight, -0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XRight - 0.1, -0.7, -0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XRight - 0.1, -0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XRight, -0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XRight, -0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XRight - 0.1, 0.7, -0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XRight - 0.1, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XRight - 0.1, -0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XRight - 0.1, 0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XRight, 0.7, -0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XRight - 0.1, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XRight, 0.7, 0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XRight, -0.7, -0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XRight, -0.7, 0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XRight, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XRight, 0.7, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex3f(XRight, -0.7, 0.1);
    glColor3f(0, 0, 1);
    glVertex3f(XRight - 0.1, -0.7, 0.1);
    glColor3f(0, 1, 0);
    glVertex3f(XRight - 0.1, 0.7, 0.1);
    glColor3f(1, 1, 0);
    glVertex3f(XRight, 0.7, 0.1);
    glEnd();
}

void paintLine()
{
    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    for (int i = 1; i <= quantity + 1; i++) {
        glBegin(GL_LINES);
        glColor3f(1, 0, 0);
        if(i == 1)
            glVertex3f(XLeft + (i - 1) * (XRight - XLeft) / (quantity + 1), 0.7, 0);
        else
            glVertex3f(XLeft + (i - 1) * (XRight - XLeft) / (quantity + 1), YPendulum,
                       ZPendulum);
        glColor3f(0, 0, 1);
        if (i == quantity + 1)
            glVertex3f(XLeft + (i) * (XRight - XLeft) / (quantity + 1), 0.7, 0);
        else
            glVertex3f(XLeft + (i) * (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum);
        glEnd();
    }
    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex3f(XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum);
    glColor3f(1, 1, 0);
    glVertex3f(a.getX(), a.getY(), a.getZ());
    glEnd();

}