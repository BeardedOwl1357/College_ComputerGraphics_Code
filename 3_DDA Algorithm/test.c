#include "GL/glut.h"
#include "stdio.h"
#include "math.h"

float X1 = 20.5,Y1 = 21.5;
float X2 = 170.5,Y2 = 140;

void init(int xmax,int ymax)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,xmax,0,ymax);
}

void dda()
{
	printf("FSMDLKFMSDLMFDS\n");
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glPointSize(4.0);
	float x,y,dx,dy,x_inc,y_inc,steps;
	x = X1;
	y = Y1;
	dx = abs(X2-X1);
	dy = abs(Y2-Y1);
	if (dx > dy)
		steps = dx;
	else
		steps = dy;
	x_inc = dx/steps;
	y_inc = dy/steps;
	glBegin(GL_POINTS);
	for(int i = 0; i < steps; ++i)
	{
		glVertex2f(x,y);
		x += x_inc;
		y += y_inc;
	}
	glEnd();
	glFlush();

}

int main(int argc, char** argv)
{
	int ws_x = 400,ws_y = 300;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(ws_x,ws_y);
	glutInitWindowPosition(50,100);
	int win = glutCreateWindow("Window");
	init(ws_x,ws_y);
	glutDisplayFunc(dda);
	glutMainLoop();
	return 0;
}
