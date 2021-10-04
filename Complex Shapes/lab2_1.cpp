#include <Windows.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <GL/glut.h>
using namespace std;

void myinit(void)
{

    glClearColor(1.0, 1.0, 1.0, 1.0);

}

void lab2_1()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor4f(0, 0, 1, 1);
    glVertex2f(.20, .10);
    glVertex2f(.60, .10);
    glVertex2f(.60, .50);
    glVertex2f(.20, .50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 0, 0, 1);

    glVertex2f(.20, .50);
    glVertex2f(.60, .50);
    glVertex2f(.40, .80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(.25, .25);
    glVertex2f(.30, .25);
    glVertex2f(.30, .30);
    glVertex2f(.25, .30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(.50, .25);
    glVertex2f(.55, .25);
    glVertex2f(.55, .30);
    glVertex2f(.50, .30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(.35, .10);
    glVertex2f(.45, .10);
    glVertex2f(.45, .30);
    glVertex2f(.35, .30);
    glEnd();
    glFlush();
    glutSwapBuffers();
}




int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("lab2_1");
    myinit();
    glutDisplayFunc(lab2_1);
    glutMainLoop();
    return 0;
}