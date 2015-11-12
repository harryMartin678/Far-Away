#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <GL/freeglut.h>

#include <GL/gl.h>

void display(void)

{

	/* clear all pixels */

	glClear(GL_COLOR_BUFFER_BIT);


	glEnd();

	glFlush();

}

void init(void)

{

	/* select clearing (background) color */

	glClearColor(0.0, 0.0, 0.0, 0.0);

	/* initialize viewing values */

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

}


int main(int argc, char** argv)

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(250, 250);

	glutInitWindowPosition(100, 100);

	glutCreateWindow("hello");

	init();

	glutDisplayFunc(display);

	glutMainLoop();

	return 0; /* ISO C requires main to return int. */

}

