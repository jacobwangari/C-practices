#include <windows.h>
#include <gl\glut.h>

void a();
void init();

void main(int argc, char** argy)
{
	glutInit(&argc, argy);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(792, 535);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("My First Graphics Application");

	init();
	glutDisplayFunc(a);
	glutMainLoop();
}

void init(void)
{
	glClearColor(0.0, 255.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
}
void a()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-10, 10, 0);
	glVertex3f(10, -10, 0);
	glVertex3f(7, 7, 0);
	glEnd();

	glutSwapBuffers();
}

