#include "GL/glut.h"
#include "stdio.h"

void init(int x_max, int y_max)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,x_max,0.0,y_max);
}

void bresenham ()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	int x1 = 10, y1 = 10, x2 = 69, y2 = 53, dx = x2 - x1, dy = y2 - y1, steps;

	if (dx < dy)
	{
		int P = 2*dx - dy;
		int x = x1, y = y1;
		glVertex2i(x, y);   //plotting first point
		while (y < y2)
		{
		    y++;
		    if (P < 0)
		    {
			P += 2*dx;
		    }
		    else
		    {
			P += 2*dx - 2*dy;
			x++;
		    }
		    glVertex2i(x, y);   //no need of rounding in bresenham
		}
	}
	else
	{
		int P = 2*dy - dx;
		int x = x1, y = y1;
		glVertex2i(x, y);   //plotting first point
		while (x < x2)
		{
		    x++;
		    if (P < 0)
		    {
			P += 2*dy;
		    }
		    else
		    {
			P += 2*dy - 2*dx;
			y++;
		    }
		    glVertex2i(x, y);   //no need of rounding in bresenham
		}
	}
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50,100);
	int ws_x = 400, ws_y = 300;
	glutInitWindowSize(ws_x,ws_y);
	int win = glutCreateWindow("Window");
	init(ws_x,ws_y);
	glutDisplayFunc(bresenham);
	glutMainLoop();
	return 0;
}
