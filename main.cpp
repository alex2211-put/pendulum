#include <GL/glut.h>  //библиотека GLUT
#include <GL/glu.h>
#include <cmath>
#include <iostream>
#include "pendulum.cpp"
#include "painting.cpp"


float rotate_y = 0, rotate_x = 0; // поворот сцены

//много всего и всё служебное


void changeSize(int w, int h)
{
    if (h == 0)
        h = 1;
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float ratio = (float) w / (float) h;
    if (w <= h)
        glOrtho(-1, 1, -1 / ratio, 1 / ratio, 1, -1);
    else
        glOrtho(-1 * ratio, 1 * ratio, -1, 1, 1, -1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void changePosition()
{
    a.setAcceleration();
    a.setV();
    a.setPosition();
    //std::cout << Vector3D(a.getX(), a.getY(), a.getZ(), XLeft + (XRight - XLeft) / (quantity + 1), YPendulum, ZPendulum).getLength() << std::endl;
}

void Rotate(int value)
{
    changePosition();
    glutPostRedisplay();
    glutTimerFunc(2, Rotate, 1);
}

void displayCell()
{
    glRotatef(rotate_x, 1.0, 0.0, 0.0);  //функция, поворачивающая кубики по х
    glRotatef(rotate_y, 0.0, 1.0, 0.0);  //а это для у
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"
    changePosition();
    paintLine();
    paintPolygon();
    glTranslated(a.getX(), a.getY(), a.getZ());
    glColor4f(0, 1, 0, 0.8);
    glutSolidSphere(0.1, 30, 30);


    glLoadIdentity();
    glEnable(GL_ALPHA_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glFlush();
    glutSwapBuffers();
}
void specialKeys(int key, int x, int y)
{
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 5;
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 5;
    else if (key == GLUT_KEY_UP)
        rotate_x += 5;
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 5;
    else if (key == GLUT_KEY_HOME)
    {
        rotate_x = -30;
        rotate_y = 15;
    }
    glutPostRedisplay();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  // параметры окна(двойная буферизация и всё такое)
    glutInitWindowSize(1200, 800);  // это размеры окна
    glutCreateWindow("Awesome Cube");  // это название создающегося окна
    glEnable(GL_DEPTH_TEST);  // тест глубины или что-то такое

    glutDisplayFunc(displayCell);  //вызвываем функцию, которая рисует кубы
    //glutKeyboardFunc(Keyboard);
    glutSpecialFunc(specialKeys);  // вызываем функцию для поворотов кубиков
    glutReshapeFunc(changeSize);
    glutTimerFunc(2, Rotate, 1);

    glutMainLoop();  // а это бесконечный цикл
    return 0;

}
