#include <stdio.h>
#include <GL/glut.h>
#include <math.h>
void myInit (void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(0.0, 1.0, 1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-780, 780, -420, 420);
}
void bresenham_line(int x1, int y1, int x2, int y2)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	int dx = x2 - x1, dy = y2 - y1, steps;
	 if (dx < dy)
	 {
	 int P = 2*dx - dy;
	 int x = x1, y = y1;
	 glVertex2i(x, y); //plotting first point
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
	 //printf("\n%i\n", x);
	 //printf("%i\n", y);
	 glVertex2i(x, y); //no need of rounding in bresenham
	 }
	 }
	 else
	 {
	 int P = 2*dy - dx;
	 int x = x1, y = y1;
	 glVertex2i(x, y); //plotting first point
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
	 //printf("\n%i\n", x);
	 //printf("%i\n", y);
	 glVertex2i(x, y); //no need of rounding in bresenham
	 }
	 }
}
void bresenham_circle(int r)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	int x = 0, y = r, h = 0, k = 0; // h, k: coordinates of centre of circle
	 int d = 3 - 2*r;
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
}
void scaling_circle(float r)
{
	float new_r= r*0.60; //r * r_new/r_old
	bresenham_circle(new_r);
}
void scaling_line(float x1, float y1, float x2, float y2)
{
	float new_x1 = x1*0.60; //x * W_new/W_old
	float new_y1 = y1*0.6; //y * H_new/H_old
	float new_x2 = x2*0.60;
	float new_y2 = y2*0.6;
	bresenham_line(new_x1, new_y1, new_x2, new_y2);
}
void display()
{
	//normal
	bresenham_circle(50);
	bresenham_line(0, 50, 200, 50);
	bresenham_line(200, -100, 200, 150);
	//scaled
	scaling_circle(50);
	scaling_line(0, 50, 200, 50);
	scaling_line(200, -100, 200, 150);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Nuh-scaling");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
