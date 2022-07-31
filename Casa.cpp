#include "Casa.h"

void Casa::DibujarCasa(float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glutSolidCube(1);
		glTranslatef(0, 0.5, 0);
		glBegin(GL_TRIANGLES);
			glVertex3f(0.8, 0, 0);
			glVertex3f(0, 1, 0);
			glVertex3f(-0.8, 0, 0);
		glEnd();
		glRotatef(5, 1, 0, 0);
		glTranslatef(-0.3, -0.2, 1.5);
		glutSolidCube(0.2);
		glTranslatef(0.6, 0, 0);
		glutSolidCube(0.2);
		glTranslatef(-0.3, -0.45, 0);
		glutSolidCube(0.3);
	glPopMatrix();
}