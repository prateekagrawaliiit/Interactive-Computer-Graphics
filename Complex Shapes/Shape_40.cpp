#include <Windows.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
int x, y;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d((float)rand() / RAND_MAX, (float)rand() / RAND_MAX, (float)rand() / RAND_MAX);
	//Letter 4
	glBegin(GL_POLYGON);
	glVertex2f(0.4, 0.6);
	glVertex2f(0.4, 0.55);
	glVertex2f(0.225, 0.325);
	glVertex2f(0.175, 0.3);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.175, 0.3);
	glVertex2f(0.225, 0.325);
	glVertex2f(0.4, 0.325);
	glVertex2f(0.4, 0.3);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.4, 0.6);
	glVertex2f(0.425, 0.6);
	glVertex2f(0.425, 0);
	glVertex2f(0.4, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.425, 0.325);
	glVertex2f(0.475, 0.325);
	glVertex2f(0.475, 0.3);
	glVertex2f(0.425, 0.3);
	glEnd();


	glColor3d((float)rand() / RAND_MAX, (float)rand() / RAND_MAX, (float)rand() / RAND_MAX);
	//Letter 0
	glBegin(GL_POLYGON);
	glVertex2f(0.55, 0.6);
	glVertex2f(0.8, 0.6);
	glVertex2f(0.8, 0.575);
	glVertex2f(0.55, 0.575);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.55, 0.575);
	glVertex2f(0.575, 0.575);
	glVertex2f(0.575, 0.025);
	glVertex2f(0.55, 0.025);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.55, 0);
	glVertex2f(0.8, 0);
	glVertex2f(0.8, 0.025);
	glVertex2f(0.55, 0.025);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.775, 0.575);
	glVertex2f(0.8, 0.575);
	glVertex2f(0.8, 0.025);
	glVertex2f(0.775, 0.025);
	glEnd();

	// Flush drawing command buffer to make drawing happen as soon as possible.
	glFlush();
}

int main(int argc, char** argv)
{
	srand((unsigned)time(NULL));
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(1000, 1280);
	glutCreateWindow("Letters");
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}