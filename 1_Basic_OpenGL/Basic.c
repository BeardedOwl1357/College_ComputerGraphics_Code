#include "GL/freeglut.h"
#include "stdio.h"

void callback()
{
	printf("Working");
}

int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	// Defining color and buffer mode
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// Defining Window
	glutInitWindowPosition(100,100);
	glutInitWindowSize(200,300);
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0,1.0,1.0,0.0);
	// Creating Window
	int window = glutCreateWindow("ChunChunMaru");
	//Callback function
	glutDisplayFunc(callback);
	//MainLoop
	glutMainLoop();
	return 0;
}

