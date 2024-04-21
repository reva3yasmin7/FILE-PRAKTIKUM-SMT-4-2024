/*
 * FreeGLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone 
 * and torus shapes in FreeGLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */


#include <gl/glut.h>

void Point(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0f); //Ukuran titik
	glBegin(GL_POINTS);//Mulai menggambar titik
	glColor3f(1.0f,0.0f,0.0f); //warna titik
	glVertex3f(0.0,0.0,1.0); //koordinat titik pd window
	glEnd();
	glFlush();
}

int main(int argc, char*argv[]) 
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Titik"); //judul window
	glutDisplayFunc(Point);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
