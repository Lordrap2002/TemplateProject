#include "Cara.h"

void Cara::dibujarCara(float x, float y, float z) {
    int i, angulo = 1, sec = 360;
    glPushMatrix();
        glTranslatef(x, y, y);
        glPushMatrix();
            glTranslatef(-0.2, 0.0, 0.0);
            for (i = 0; i < sec; i++) {
                glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
                glTranslatef(0.2, 0.0, 0.0);
                glPushMatrix();
                    glScalef(1.0, 0.1, 1.0);
                    glutSolidCube(1.0);
                glPopMatrix();
                glTranslatef(0.2, 0.0, 0.0);
            }
        glPopMatrix();
    glPopMatrix();
}
