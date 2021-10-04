#include <Windows.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void myinit(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);

}

void lab2_2()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(2);

    glBegin(GL_LINE_LOOP);
    glColor4f(0, 0, 0, 1);
    glVertex2f(.10, .20);
    glVertex2f(.90, .20);
    glVertex2f(.90, .40);
    glVertex2f(.10, .40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);

    for (float i = 0; i <= 360 / 3.14; i++)
    {
        glVertex2f(.30 + .08 * cos(i), .20 + .08 * sin(i));
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 0.8);

    for (float i = 0; i <= 360 / 3.14; i++)
    {
        glVertex2f(.75 + .08 * cos(i), .20 + .08 * sin(i));
    }
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor4f(0, 0, 0, 1);
    glVertex2f(.30, .40);
    glVertex2f(.90, .40);
    glVertex2f(.80, .65);
    glVertex2f(.45, .65);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor4f(0, 0, 0, 1);
    glVertex2f(.33, .42);
    glVertex2f(.56, .42);
    glVertex2f(.56, .63);
    glVertex2f(.46, .63);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glColor4f(0, 0, 0, 1);
    glVertex2f(.62, .42);
    glVertex2f(.88, .42);
    glVertex2f(.79, .63);
    glVertex2f(.62, .63);
    glEnd();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("lab2_2");
    myinit();
    glutDisplayFunc(lab2_2);
    glutMainLoop();
    return 0;
}