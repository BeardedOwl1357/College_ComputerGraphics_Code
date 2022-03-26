#include "GL/glut.h"
#include "stdio.h"

void init()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,150.0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glPointSize(4.0);
	glBegin(GL_LINE_LOOP);
		glVertex2i(50,50);
		glVertex2i(80,50);
		glVertex2i(80,90);
		glVertex2i(60,110);
		glVertex2i(50,90);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(50,90);
		glVertex2i(80,90);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400,300);
	glutInitWindowPosition(50,100);
	int win = glutCreateWindow("window");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
