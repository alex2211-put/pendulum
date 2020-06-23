#include <GL/glut.h>  //библиотека GLUT
float XLeft = -1, XRight = 1;
float rotate_y = 0, rotate_x = 0;
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
    glBegin(GL_LINES);
    glColor3f(1, 0, 0);
    glVertex3f(XLeft, 0.7, 0);  //здесь и далее сначала цвет
    glColor3f(0, 1, 0);
    glVertex3f(XRight, 0.7, 0);  //здесь и далее сначала цвет
    glEnd();
    glLineWidth(2);
}

void displayCell()
{
    glRotatef(rotate_x, 1.0, 0.0, 0.0);  //функция, поворачивающая кубики по х
    glRotatef(rotate_y, 0.0, 1.0, 0.0);  //а это для у
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //очищаем экран, чтобы картинки "не размножались"
    paintLine();
    paintPolygon();
    glLoadIdentity();
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
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  //параметры окна(двойная буферизация и всё такое)
    glutInitWindowSize(1200, 800);  //это размеры окна
    glutCreateWindow("Awesome Cube");  //это название создающегося окна
    glEnable(GL_DEPTH_TEST);  //тест глубины или что-то такое

    glutDisplayFunc(displayCell);  //вызвываем функцию, которая рисует кубы
    //glutKeyboardFunc(Keyboard);
    glutSpecialFunc(specialKeys);  //вызываем функцию для поворотов кубиков
    glutReshapeFunc(changeSize);

    glutMainLoop();  //а это бесконечный цикл
    return 0;

}
