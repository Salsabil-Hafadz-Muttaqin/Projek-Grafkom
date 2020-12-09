#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON); //batu besar
    glColor3b(827, 827, 827);
    glVertex2f(4.3196524106636,4.0084368874408); //M
    glVertex2f(4.5100014404622, 5.8303490297986); //N
    glVertex2f(4.99947037423, 7.8969956390402); //A
    glVertex2f(6.3591063013626, 10.1539912780804); //B
    glVertex2f(9.4046907781398, 11.3232781754145); //C
    glVertex2f(10.9274830165284, 10.8881946787321); //D
    glVertex2f(12.5590461290876, 8.6583917582345); //E
    glVertex2f(14, 4); //F
    glEnd();

    glBegin(GL_POLYGON); //bayangan batu besar
    glColor3b(031, 031, 031);
    glVertex2f(4.3196524106636,4.0084368874408); //N
    glVertex2f(4.5100014404622, 5.8303490297986); //M
    glVertex2f(4.99947037423, 7.8969956390402); //A
    glVertex2f(6.3591063013626, 10.1539912780804); //B
    glVertex2f(9.4046907781398, 11.3232781754145); //C
    glVertex2f(8.4257529106043, 10.1811839966231); //Z
    glVertex2f(7.8547058212086, 9.6645223443127); //W
    glVertex2f(7.2292732947275, 9.2294388476302); //V
    glVertex2f(6.7398043609598, 8.4680427284359); //U
    glVertex2f(6.8213825165877, 7.9241883575829); //T
    glVertex2f(6.6038407682465, 7.1084068013033); //S
    glVertex2f(6.0630393528136, 6.3758796438482); //R
    glVertex2f(5.8152519305096, 5.3680728145735); //Q
    glVertex2f(6.0099529691508, 4.6771153666395); //P
    glVertex2f(6.0000060767625, 4.0069723785881); //O
    glEnd();

    glBegin(GL_POLYGON); //batu kecil
    glColor3b(592, 592, 592);
    glVertex2f(10.5467849569312, 3.9812441688982); //L
    glVertex2f(10.5195922383886, 5.8575417483412); //K
    glVertex2f(12.0967699138625, 7.4619121423578); //J
    glVertex2f(14.2721873972747, 7.6250684536137); //I
    glVertex2f(15.65901604295, 6.4013961191943); //H
    glVertex2f(15.7677869171207, 4.0356296059835); //G
    glEnd();

    glutSwapBuffers();
}
void init() { // background gambar
    glClearColor(1.0,1.0,0.0,1.0);//warna backgroung
}
int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(728, 728);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("rintangan"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0, 20, 0, 20); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
