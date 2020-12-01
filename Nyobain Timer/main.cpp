#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include "batu.h"




int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {0,30};
float posisiY[2] = {0,30};



//menggambar objek ular
void ObjekUlar(){

    glScalef(0.5, 0.4, 0.0);
    glBegin(GL_QUADS);//Bagian Atas
    glColor3f(1.0,1.0,0.5);//warna objek
    glVertex2f(11,19); //A
    glVertex2f(14,19); //B
    glVertex2f(14,17); //C
    glVertex2f(11, 17); //D
    glEnd();

    glBegin(GL_QUADS);//mata kanan
    glColor3f(0.0,0.0,0.0);
    glVertex2f(13,17);//Q
    glVertex2f(14,17);//C
    glVertex2f(14,16);//L
    glVertex2f(13,16);//R
    glEnd();

    glBegin(GL_QUADS);//mata kanan
    glColor3f(0.0,0.0,0.0);
    glVertex2f(11,17); //D
    glVertex2f(12,17); //P
    glVertex2f(12,16); //O
    glVertex2f(11,16); //K
    glEnd();

    glBegin(GL_QUADS);//antaramata
    glColor3f(1.0,1.0,0.5);
    glVertex2f(12,17); //P
    glVertex2f(13,17);//Q
    glVertex2f(13,11); //V2
    glVertex2f(12,11); //U
    glEnd();

    glBegin(GL_QUADS);//bawah mata kanan
    glColor3f(1.0,1.0,0.5);
    glVertex2f(12,16); //O
    glVertex2f(14,16);//L
    glVertex2f(14,11); //M
    glVertex2f(13,11); //V2
    glEnd();

    glBegin(GL_QUADS);//bawah mata kiri
    glColor3f(1.0,1.0,0.5);
    glVertex2f(11,16); //K
    glVertex2f(13,16);//R
    glVertex2f(12,11); //U
    glVertex2f(11,11); //N
    glEnd();

    glBegin(GL_QUADS);//kepala kanan
    glColor3f(1.0,1.0,0.5);
    glVertex2f(14,17); //C
    glVertex2f(15,17);//E
    glVertex2f(15,14); //F
    glVertex2f(14,14); //G
    glEnd();

    glBegin(GL_QUADS);//kepala kiri
    glColor3f(1.0,1.0,0.5);
    glVertex2f(10,17); //H
    glVertex2f(11,17);//D
    glVertex2f(11,14); //J
    glVertex2f(10,14); //I
    glEnd();

    glBegin(GL_QUADS); //badan 2
    glColor3f(1.0,1.0,0.5);
    glVertex2f(14,12);//S
    glVertex2f(15,12);//T
    glVertex2f(15,7);//W
    glVertex2f(14,7);//new point
    glEnd();

    glBegin(GL_QUADS); //badan 2
    glColor3f(1.0,1.0,0.5);
    glVertex2f(12,11);//U
    glVertex2f(14,11);//M
    glVertex2f(14,7);//new point
    glVertex2f(12,7);//V
    glEnd();

    glBegin(GL_QUADS); //badan 3
    glColor3f(1.0,1.0,0.5);
    glVertex2f(12,7);//V
    glVertex2f(13,7);//B1
    glVertex2f(13,4);//C1
    glVertex2f(12,4);//new point
    glEnd();

    glBegin(GL_QUADS); //badan 3
    glColor3f(1.0,1.0,0.5);
    glVertex2f(10,8);//A1
    glVertex2f(12,8);//Z
    glVertex2f(12,4);//NEWPOINT
    glVertex2f(10,4);//D1
    glEnd();

    glBegin(GL_QUADS); //badan 4
    glColor3f(1.0,1.0,0.5);
    glVertex2f(13,5);//E1
    glVertex2f(14,5);//F1
    glVertex2f(14,2);//G1
    glVertex2f(13,2);//NEW POINT
    glEnd();

    glBegin(GL_QUADS); //badan 4
    glColor3f(1.0,1.0,0.5);
    glVertex2f(11,4);//I1
    glVertex2f(13,4);//C1
    glVertex2f(13,2);//NEW POINT
    glVertex2f(11,2);//H1
    glEnd();

    glBegin(GL_QUADS); //badan 5
    glColor3f(1.0,1.0,0.5);
    glVertex2f(14,3);//J1
    glVertex2f(15,3);//K1
    glVertex2f(15,-2);//L1
    glVertex2f(14,-2);//Q1
    glEnd();

    glBegin(GL_QUADS); //badan 5
    glColor3f(1.0,1.0,0.5);
    glVertex2f(12,2);//N1
    glVertex2f(14,2);//G1
    glVertex2f(14,-2);//Q1
    glVertex2f(12,-2);//M1
    glEnd();

    glBegin(GL_QUADS); //badan 6
    glColor3f(1.0,1.0,0.5);
    glVertex2f(11,-1);//P1
    glVertex2f(12,-1);//O1
    glVertex2f(12,-4);//NEW POINT
    glVertex2f(11,-4);//S1
    glEnd();

    glBegin(GL_QUADS); //badan 6
    glColor3f(1.0,1.0,0.5);
    glVertex2f(12,-2);//M1
    glVertex2f(14,-2);//Q1
    glVertex2f(14,-4);//R1
    glVertex2f(12,-4);//NEWPOINT
    glEnd();

    glBegin(GL_QUADS); //badan 7
    glColor3f(1.0,1.0,0.5);
    glVertex2f(10,-3);//U1
    glVertex2f(11,-3);//T1
    glVertex2f(11,-7);//E2
    glVertex2f(10,-7);//V1
    glEnd();

    glBegin(GL_QUADS); //badan 7
    glColor3f(1.0,1.0,0.5);
    glVertex2f(11,-4);//S1
    glVertex2f(13,-4);//Z1
    glVertex2f(13,-7);//W1
    glVertex2f(11,-7);//E2
    glEnd();

    glBegin(GL_QUADS); //badan 8
    glColor3f(1.0,1.0,0.5);
    glVertex2f(13,-6);//A2
    glVertex2f(14,-6);//B2
    glVertex2f(14,-10);//C2
    glVertex2f(13,-10);//I2
    glEnd();

    glBegin(GL_QUADS); //badan 8
    glColor3f(1.0,1.0,0.5);
    glVertex2f(11,-7);//E2
    glVertex2f(13,-7);//W1
    glVertex2f(13,-10);//I2
    glVertex2f(11,-10);//D2
    glEnd();

    glBegin(GL_QUADS); //badan 9
    glColor3f(1.0,1.0,0.5);
    glVertex2f(14,-9);//F2
    glVertex2f(15,-9);//G2
    glVertex2f(15,-12);//H2
    glVertex2f(14,-12);//N2
    glEnd();

    glBegin(GL_QUADS); //badan 9
    glColor3f(1.0,1.0,0.5);
    glVertex2f(13,-10);//I2
    glVertex2f(14,-10);//C2
    glVertex2f(14,-12);//N2
    glVertex2f(13,-12);//J2
    glEnd();

    glBegin(GL_QUADS); //badan 10
    glColor3f(1.0,1.0,0.5);
    glVertex2f(15,-11);//K2
    glVertex2f(16,-11);//L2
    glVertex2f(16,-12);//M2
    glVertex2f(15,-12);//H2
    glEnd();

    glBegin(GL_QUADS); //badan 11
    glColor3f(1.0,1.0,0.5);
    glVertex2f(14,-12);//N2
    glVertex2f(16,-12);//Q2
    glVertex2f(16,-13);//P2
    glVertex2f(14,-13);//O2
    glEnd();

    glBegin(GL_QUADS); //badan 12
    glColor3f(1.0,1.0,0.5);
    glVertex2f(14,-13);//R2
    glVertex2f(16,-13);//U2
    glVertex2f(16,-14);//T2
    glVertex2f(14,-14);//S2
    glEnd();

    glBegin(GL_QUADS); //ekor
    glColor3f(1.0,1.0,0.5);
    glVertex2f(13.5,-14);//R2
    glVertex2f(15,-14);//U2
    glVertex2f(15,-15.5);//T2
    glVertex2f(13.5,-15.5);//S2
    glEnd();
}

void UlarObjek(){

    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); //mengendalikan posisi ular
    glTranslatef(74.5,8,0); //menengahkan view
    ObjekUlar(); //memanggil view ular
    glPopMatrix();

}

//fungsi mengendalikan objek
void charController(int data)
{
    //jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (posisiX[0] >= -28){
            posisiX[0] -= 0.1f;
            posisiX[5] -= 0.1f;
            horizontalMove -= 0.1f;
            }
    }
    //jika menekan tombol panah kanan
    else if (GetAsyncKeyState(VK_RIGHT)){
        if (posisiX[5] <= 27){
            posisiX[0] += 0.1f;
            posisiX[5] += 0.1f;
            horizontalMove += 0.1f;
            }
    }
    //jika menekan tombol panah atas
    if (GetAsyncKeyState(VK_UP)){
        if (posisiY[5] <= 73){
            posisiY[0] += 0.1f;
            posisiY[5] += 0.1f;
            verticalMove += 0.1f;
        }
    }
    //jika menekan tombol panah bawah
    else if (GetAsyncKeyState(VK_DOWN)){
        if (posisiY[0] >= 0){
            posisiY[0] -= 0.1f;
            posisiY[5] -= 0.1f;
            verticalMove -= 0.1f;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(1,charController,0);
}

void keyboard(unsigned char key, int x, int y)
{
    if(key==100 || key==68){ // Tombol d atau D
        angle--;
    }
    if(key==97 || key==65){ // Tombol a atau A
        angle++;
    }
}

void displayMe(void){

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3b(247, 105, 105);
    glVertex2f(0, 0);
    glVertex2f(0, 90);
    glVertex2f(160, 90);
    glVertex2f(160, 0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3b(0, 0, 0);
    glVertex2f(50, 0);
    glVertex2f(50, 90);
    glVertex2f(110, 90);
    glVertex2f(110, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(50, 0);
    glVertex2f(50, 90);
    glVertex2f(51, 90);
    glVertex2f(51, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(70, 0);
    glVertex2f(70, 90);
    glVertex2f(71, 90);
    glVertex2f(71, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(90, 0);
    glVertex2f(90, 90);
    glVertex2f(91, 90);
    glVertex2f(91, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(110, 0);
    glVertex2f(110, 90);
    glVertex2f(111, 90);
    glVertex2f(111, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(54, 30);
    glVertex2f(53, 35);
    glVertex2f(62, 38);
    glVertex2f(68, 35);
    glVertex2f(68, 30);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(93, 56);
    glVertex2f(98, 58);
    glVertex2f(106, 60);
    glVertex2f(108, 56);
    glVertex2f(104, 55);
    glVertex2f(106, 53);
    glVertex2f(98, 51);
    glVertex2f(95, 53);
    glEnd();

    //pohon kanan
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(120, 68);
    glVertex2f(120, 76);
    glVertex2f(114, 72);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(114, 72);
    glVertex2f(120, 76);
    glVertex2f(114, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(114, 80);
    glVertex2f(120, 76);
    glVertex2f(120, 84);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(120, 84);
    glVertex2f(120, 76);
    glVertex2f(126, 80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(126, 80);
    glVertex2f(120, 76);
    glVertex2f(126, 72);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(126, 72);
    glVertex2f(120, 76);
    glVertex2f(120, 68);
    glEnd();

    batu();






	glutSwapBuffers();

    glClearColor(1,1,1,1);
    //glClear(GL_COLOR_BUFFER_BIT);
    //memanggil ular
    UlarObjek();

    glFlush();
    glutSwapBuffers();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,1.0,1.0); //membersihkan windows
    glColor3f(0.0,0.0,0.0);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
}

int main (int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Nyobain Timer");
    gluOrtho2D(0, 160, 0, 90);
    glutDisplayFunc(displayMe);
    glutTimerFunc(1,charController,0);
    glutKeyboardFunc(keyboard);
    myinit();
    glutMainLoop();
    return 0;
}
