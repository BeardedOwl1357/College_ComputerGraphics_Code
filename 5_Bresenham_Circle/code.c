#include "GL/glut.h"
#include "stdio.h"

void init(int x_max,int y_max)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0,x_max,0,y_max);
}

void bresenham()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
	int r = 50, x = 0, y = r, h = 170, k = 130;  // h, k: coordinates of centre of circle
	int d = 3 - (2*r);
	while (x <= y)
	{
		//Circle: 8 way symmetry
		glVertex2i(x + h, y + k);
		glVertex2i(-x + h, y + k);
		glVertex2i(x + h, -y + k);
		glVertex2i(-x + h, -y + k);

		glVertex2i(y + h, x + k);
		glVertex2i(-y + h, x + k);
		glVertex2i(y + h, -x + k);
		glVertex2i(-y + h, -x + k);

		if (d < 0)
		{
		    d += 4*x + 6;
		}
		else
		{
		    d += 4*(x - y) + 10;
		    y--;
		}
		x++;
	}
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	int ws_x = 400, ws_y = 300;
	glutInitWindowSize(ws_x,ws_y);
	glutInitWindowPosition(50,100);
	int win = glutCreateWindow("window");
	init(ws_x,ws_y);
	glutDisplayFunc(bresenham);
	glutMainLoop();

	return 0;
}
