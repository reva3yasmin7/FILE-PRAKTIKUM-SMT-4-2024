#include <gl/glut.h>

void Rumah(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	
//	GL_TRIANGLE_FAN 
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.6, 0.4);
	glVertex2f(0.45, 0.6);
	glEnd();
	
//	GL_TRIANGLE_STRIP)
	glBegin(GL_TRIANGLE_STRIP);
  	glColor3f(0.4f, 0.2f, 0.0f);
    glVertex2f(-0.3, 0.2);
    glVertex2f(-0.15, 0.6);
    glVertex2f(0.45, 0.6);
    glVertex2f(0.3, 0.2);
    glEnd();

//	GL_QUADS
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(0.3, -0.2);
	glVertex2f(0.6, 0.0);
	glVertex2f(0.6, 0.4);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.3, -0.2);	
	glEnd();
	
//	GL_QUAD_STRIP
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(0.3,-0.2);
	glVertex2f(0.3,0.2);
	glVertex2f(-0.3,0.2);	
	glVertex2f(-0.3,-0.2);
	glEnd();
	
//	GL_TRIANGLE_FAN 
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.4f, 0.2f, 0.0f);
	glVertex2f(0.3, 0.2);
	glVertex2f(-0.3, 0.2);
	glVertex2f(0.075, 0.4);
	glEnd();
	
//	GL_TRIANGLE_FAN 
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(0.3, 0.2);
	glVertex2f(-0.3, 0.2);
	glVertex2f(0.0, 0.0);
	glEnd();
	
// 	GL_LINE_LOOP 
	glLineWidth(2.0);
    glBegin(GL_LINE_LOOP);
    glLineWidth(10.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4, -0.13);
    glVertex2f(0.5, -0.06);
    glVertex2f(0.5, 0.17);
    glVertex2f(0.4, 0.1);
    glEnd();
    
// 	GL_LINE_STRIP 
	glLineWidth(2.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.15, 0.0);
	glVertex2f(-0.15, 0.0);
	glVertex2f(-0.15, 0.1);
	glEnd();

//	GL_POINTS	
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(0.43,-0.02);
	glEnd();

//	GL_LINES
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,0.1);
	glEnd();

	glFlush();      	 	 	 	  
}

int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutInitWindowSize(960, 720);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Gambar Rumah");
	glutDisplayFunc(Rumah);
	glClearColor(0.0f, 0.5f, 0.0f, 1.0f);
	glutMainLoop();
	return 0;  
}
