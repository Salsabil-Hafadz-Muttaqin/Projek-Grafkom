#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void lubang(){
    glBegin(GL_POLYGON); //besar
    glColor3f(0.4, 0.4, 0.4);
    glVertex2f(110.18, 34.01); //S4
    glVertex2f(104.32971, 31.67945); //B5
    glVertex2f(102.10261, 29.75604); //C5
    glVertex2f(100, 30); //D5
    glVertex2f(96.36122, 27.97649); //E5
    glVertex2f(95.48727, 25.95968); //F5
    glVertex2f(93.40323, 25.08573); //G5
    glVertex2f(90.98307, 22.12775); //H5
    glVertex2f(94.20996, 23.47228); //I5
    glVertex2f(96.80024, 23.4062); //J5
    glVertex2f(98.96154, 25.75544); //K5
    glVertex2f(102, 26); //N5
    glVertex2f(105.36805, 24.52956); //L5
    glVertex2f(110.13, 25); //M5
    glEnd();

    glBegin(GL_LINE_STRIP); //besar
    glColor3f(1, 1, 1);
    glVertex2f(110.18, 34.01); //S4
    glVertex2f(104.32971, 31.67945); //B5
    glVertex2f(102.10261, 29.75604); //C5
    glVertex2f(100, 30); //D5
    glVertex2f(96.36122, 27.97649); //E5
    glVertex2f(95.48727, 25.95968); //F5
    glVertex2f(93.40323, 25.08573); //G5
    glVertex2f(90.98307, 22.12775); //H5
    glVertex2f(94.20996, 23.47228); //I5
    glVertex2f(96.80024, 23.4062); //J5
    glVertex2f(98.96154, 25.75544); //K5
    glVertex2f(102, 26); //N5
    glVertex2f(105.36805, 24.52956); //L5
    glVertex2f(110.13, 25); //M5
    glEnd();
}
