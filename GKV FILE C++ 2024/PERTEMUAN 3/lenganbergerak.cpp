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

#include <GL/glut.h>

#include <stdlib.h>

static int shoulder=0, elbow=0;
void Init(void){
	glClearColor(0.0,0.0,0.0,0.0);
glShadeModel(GL_FLAT);
}

void Dislay(void){
	glClear()GL_COLOR_BUFFER_BIT);
	
}
