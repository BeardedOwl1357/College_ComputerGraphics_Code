#include "GL/freeglut.h"
#include "stdio.h"

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	int width = 1920,height = 1080;
	glutInitWindowSize(width,height);

	int x = 100, y = 100;
	glutInitWindowPosition(x,y);

	int winHandle = glutCreateWindow("Mera Window");
	printf("Window handle = %d\n",winHandle);

	glutMainLoop();
	return 0;

}
