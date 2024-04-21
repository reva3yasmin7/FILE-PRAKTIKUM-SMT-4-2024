#include <gl/glut.h>

void Segitiga(void) {
	glTranslatef(0.25,-0.25,0);
	glRotated(60.0,0.0,0.0,1.0);
	
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(-0.10,-0.10,0.0);
	
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(0.10,-0.10,0.0);
	
	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0,0.10,0.0);
	
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]){
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Segi empat");
	glutDisplayFunc(Segitiga);
	glClearColor(0.0f, 0.0f, 1.0f,1.0f);
	glutMainLoop();
	return 0;
}
