#include <gl/glut.h>

void Point(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(0.25,0.25,0.0);
	glEnd();
	glFlush();
}

void Garis(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex3f(0.0,0.20,0.0);
	glVertex3f(0.0,-0.20,0.0);
	glEnd();
	glFlush();
}
void Segitiga(void) {
	glClear(GL_COLOR_BUFFER_BIT);
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
void SegiEmpat(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f,0.0f,0.0f);
	glRectf(-0.18,0.18,0.18,-0.18);
	glFlush();
}



