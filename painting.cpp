//
// Created by alikp on 25.06.2020.
//


pendulum a(0, 1, 1);
pendulum b(0, -1, 2);


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
    if(quantity == 1)
    {
        glBegin(GL_LINES);
        glColor3f(1, 0, 0);
        glVertex3f(XLeft, 0.7, 0);

        glColor3f(0, 0, 1);
        glVertex3f(XLeft + 1 * lengthToPendulum, a.getStringMountY(),
                   a.getStringMountZ());
        glEnd();

        glBegin(GL_LINES);
        glColor3f(1, 0, 0);
        glVertex3f(XLeft + 1 * lengthToPendulum, a.getStringMountY(), a.getStringMountZ());

        glColor3f(0, 0, 1);
        glVertex3f(XLeft + 2 * lengthToPendulum, 0.7, 0);

        glEnd();
    }
    if(quantity == 2)
        {
            glBegin(GL_LINES);
            glColor3f(1, 0, 0);
                glVertex3f(XLeft, 0.7, 0);

            glColor3f(0, 0, 1);
                glVertex3f(XLeft + 1 * lengthToPendulum, a.getStringMountY(), a.getStringMountZ());
            glEnd();

            glBegin(GL_LINES);
            glColor3f(1, 0, 0);
            glVertex3f(XLeft + 1 * lengthToPendulum, a.getStringMountY(), a.getStringMountZ());

            glColor3f(0, 0, 1);
            glVertex3f(XLeft + 2 * lengthToPendulum, b.getStringMountY(), b.getStringMountZ());
            glEnd();

            glBegin(GL_LINES);
            glColor3f(1, 0, 0);
            glVertex3f(XLeft + 2 * lengthToPendulum, b.getStringMountY(), b.getStringMountZ());

            glColor3f(0, 0, 1);
            glVertex3f(XRight, 0.7, 0);

            glEnd();
        }


    glBegin(GL_LINES);
    glColor3f(0, 1, 1);
    glVertex3f(XLeft + lengthToPendulum, a.getStringMountY(), a.getStringMountZ());
    glColor3f(1, 1, 0);
    glVertex3f(a.getX(), a.getY(), a.getZ());
    glEnd();

    if(quantity == 2)
    {
        glBegin(GL_LINES);
        glColor3f(0, 1, 1);
        glVertex3f(XLeft + lengthToPendulum * 2, b.getStringMountY(), b.getStringMountZ());
        glColor3f(1, 1, 0);
        glVertex3f(b.getX(), b.getY(), b.getZ());
        glEnd();
    }
}