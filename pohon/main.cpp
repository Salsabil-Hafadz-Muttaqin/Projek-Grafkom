#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON); //BULAT
    glColor3b(596, 302, 067);
    glVertex2f(82.01211, 82.00568); //G4
    glVertex2f(83.93433, 79.16079); //H4
    glVertex2f(83.70367, 76.08523); //I4
    glVertex2f(81.5748, 74.9999); //J4
    glVertex2f(79.78233, 76.08523); //K4
    glVertex2f(78.85966, 78.54568); //L4
    glVertex2f(79.24411, 80.69857); //M4
    glVertex2f(80.35921, 81.92272); //N4
    glEnd();

    glBegin(GL_POLYGON); //panjang
    glColor3b(596, 302, 067);
    glVertex2f(82.01211, 82.00568); //G4
    glVertex2f(102.11436, 82.21438); //O4
    glVertex2f(103.57355, 80.43914); //P4
    glVertex2f(103.81442, 78.35153); //Q4
    glVertex2f(102.90546, 76.14876); //R4
    glVertex2f(81.5748, 74.9999); //J4
    glEnd();

    glBegin(GL_LINE_STRIP); // SEMUA
    glColor3b(478, 243, 055);
    glVertex2f(82.01211, 82.00568); //G4
    glVertex2f(83.93433, 79.16079); //H4
    glVertex2f(83.70367, 76.08523); //I4
    glVertex2f(81.5748, 74.9999); //J4
    glVertex2f(79.78233, 76.08523); //K4
    glVertex2f(78.85966, 78.54568); //L4
    glVertex2f(79.24411, 80.69857); //M4
    glVertex2f(80.35921, 81.92272); //N4
    glEnd();

    glBegin(GL_LINE_STRIP); // BULAT
    glColor3b(478, 243, 055);
    glVertex2f(82.01211, 82.00568); //G4
    glVertex2f(102.11436, 82.21438); //O4
    glVertex2f(103.57355, 80.43914); //P4
    glVertex2f(103.81442, 78.35153); //Q4
    glVertex2f(102.90546, 76.14876); //R4
    glVertex2f(81.5748, 74.9999); //J4
    glEnd();

    glBegin(GL_LINE_STRIP); //TAMBAHAN
    glColor3b(478, 243, 055);
    glVertex2f(80.35921, 81.92272); //N4
    glVertex2f(82.01211, 82.00568); //G4
    glEnd();

    glBegin(GL_LINE_STRIP); //GARIS 1
    glColor3b(478, 243, 055);
    glVertex2f(86.08913, 80.3395); //T4
    glVertex2f(100, 80); //U4
    glEnd();

    glBegin(GL_LINE_STRIP); //GARIS2
    glColor3b(478, 243, 055);
    glVertex2f(89.13773, 78.72554); //V4
    glVertex2f(98.34329, 78.60599); //W4
    glEnd();

    glBegin(GL_LINE_STRIP); //GARIS 3
    glColor3b(478, 243, 055);
    glVertex2f(87.58354, 76.93225); //Z4
    glVertex2f(99.95726, 77.29091); //A5
    glEnd();

    glBegin(GL_LINE_STRIP); // BULAT2
    glColor3b(478, 243, 055);
    glVertex2f(81.21046, 80.63574); //S5
    glVertex2f(81.98782, 80.19847); //B5
    glVertex2f(82.53845, 79.40491); //C5
    glVertex2f(82.84616, 78.43321); //D5
    glVertex2f(82.76518, 77.39673); //E5
    glVertex2f(81.66392, 76.42502); //F5
    glVertex2f(80.30353, 77.46151); //G5
    glVertex2f(80.17397, 78.64374); //H5
    glVertex2f(81.04851, 79.84218); //I5
    glVertex2f(81.90684, 79.37252); //J5
    glVertex2f(82.32792, 78.38462); //K5
    glVertex2f(81.76109, 77.25097); //L5
    glVertex2f(80.80558, 78.10931); //M5
    glVertex2f(81.17807, 79.06482); //N5
    glVertex2f(81.72676, 78.40643); //O5
    glEnd();

	glutSwapBuffers();
}
void init() { // background gambar
    glClearColor(1.0,1.0,0.0,1.0);//warna backgroung
}
int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 1000);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("rintangan2"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0, 160, 0, 90); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
