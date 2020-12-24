#ifndef GENANGAN_H_INCLUDED
#define GENANGAN_H_INCLUDED
#endif // GENANGAN_H_INCLUDED
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void genangan(){
    glBegin(GL_POLYGON); //BULAT
    glColor3f(156, 211, 219);
    glVertex2f(63.07125, 40.16875); //Q
    glVertex2f(65.27625, 40.11625);
    glVertex2f(66, 38);
    glVertex2f(68, 38);
    glVertex2f(70.64625, 37.38625);
    glVertex2f(72.18375, 37.435);
    glVertex2f(73.7025, 38.34625);
    glVertex2f(73.80375, 40.675);
    glVertex2f(76.1325, 40.8775);
    glVertex2f(76.03125, 42.39625);
    glVertex2f(77.7525, 42.295);
    glVertex2f(77.955, 43.81375); //J
    glVertex2f(79.52625, 43.85125); //I
    glVertex2f(79.47375, 46.64875);
    glVertex2f(77.7525, 48.1675); //G
    glVertex2f(76.63875, 49.99); //F
    glVertex2f(74.5125, 49.88875);
    glVertex2f(71.77875, 49.7875); //E
    glVertex2f(69.26625, 49.94125);
    glVertex2f(67.85625, 48.62125); //C
    glVertex2f(65.15625, 46.55125);
    glVertex2f(63.31875, 45.44875);
    glVertex2f(64.61625, 43.92625); //U
    glVertex2f(64.25625, 41.9425);
    glEnd();
}
