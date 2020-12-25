#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void segitiga(){
    glBegin(GL_POLYGON); //kotak
    glColor3f(0.682, 0, 0);
    glVertex2f(53.98509, 47.22178); //R5
    glVertex2f(61.18868, 44.10022); //S5
    glVertex2f(67.19167, 48.18226); //T5
    glVertex2f(64.56204, 49.61328); //B6
    glVertex2f(62.4714, 47.8534); //A6
    glVertex2f(58.12873, 47.62484); //Z5
    glVertex2f(56.04788, 49.21647); //W5
    //glVertex2f();
    //glVertex2f();
    //glVertex2f();
    glEnd();

    glBegin(GL_POLYGON); // SEGITIGA
    glColor3f(0.682, 0, 0);
    glVertex2f(64.56204, 49.61328); //B6
    glVertex2f(62.4714, 47.8534); //A6
    glVertex2f(58.12873, 47.62484); //Z5
    glVertex2f(56.04788, 49.21647); //W5
    glVertex2f(59.27473, 63.77764); //V5
    glVertex2f(61.00249, 63.77764); //C6
    glEnd();

    glBegin(GL_POLYGON); // kotak kecil
    glColor3f(1, 1, 1);
    glVertex2f(58.08, 58.38); //D6
    glVertex2f(57.3, 54.85); //E6
    glVertex2f(63.18, 55.12); //F6
    glVertex2f(62.35, 58.41); //G5
    glEnd();

    glBegin(GL_LINE_STRIP); //besar
    glColor3f(1, 1, 1);
    glVertex2f(56.04788, 49.21647); //W5
    glVertex2f(53.98509, 47.22178); //R5
    glVertex2f(61.18868, 44.10022); //S5
    glVertex2f(67.19167, 48.18226); //T5
    glVertex2f(64.56204, 49.61328); //B6
    glVertex2f(61.00249, 63.77764); //C6
    glVertex2f(59.27473, 63.77764); //V5
    glVertex2f(56.04788, 49.21647); //W5
    glVertex2f(58.12873, 47.62484); //Z5
    glVertex2f(62.4714, 47.8534); //A6
    glVertex2f(64.56204, 49.61328); //B6

    //glVertex2f(110.18, 34.01); //S4
    //glVertex2f(104.32971, 31.67945); //B5
    //glVertex2f(102.10261, 29.75604); //C5
    //glVertex2f(96.36122, 27.97649); //E5
    //glVertex2f(95.48727, 25.95968); //F5
    //glVertex2f(93.40323, 25.08573); //G5
    //glVertex2f(90.98307, 22.12775); //H5
    //glVertex2f(94.20996, 23.47228); //I5
    //glVertex2f(98.96154, 25.75544); //K5
    //glVertex2f(102, 26); //N5
    //glVertex2f(105.36805, 24.52956); //L5
    //glVertex2f(110.13, 25); //M5
    glEnd();
}
