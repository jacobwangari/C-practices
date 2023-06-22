#include <windows.h>
#include <gl\gl.h>
#include <gl\glut.h>

void init(void);
void display(void);
void keyboard(unsigned char, int, int);

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

	// window size
	glutInitWindowSize(1000, 1000);

	//top left corner coordinates
	glutInitWindowPosition(50, 50);

	// Name of the window
	glutCreateWindow("CAT 2 Assignment");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);  /* set keyboard handler */
	glutMainLoop();
	return 0;
}

void init(void)
{
	// yellow background
	glClearColor(1.0, 1.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-15.0, 15.0, -15.0, 15.0, -15.0, 15.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	//magenta color
	glColor3f(1.0, 0.0, 1.0);

	glVertex3f(0.0, 9, 0.0);
	glVertex3f(-3.0, 3.0, 0.0);
	glVertex3f(3.0, 9.0, 0.0);

	glEnd();
	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{

	switch (key)
	{
		//rotation along x axis
	case 'x':
	case 'X':
		glRotatef(3.0, 1.0, 0.0, 0.0);
		break;
		//rotation along z axis
	case 'z':
	case 'Z':
		glRotatef(3.0, 0.0, 0.0, 1.0);
		break;
	case 'L':
	case 'l':
		glScalef(1.5, 1.5, 1.5);
		break;
	case 'r':
	case 'R':
		glScalef(0.5, 0.5, -0.5);
	}
	display(); 
}


