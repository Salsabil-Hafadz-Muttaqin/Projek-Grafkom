#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
<<<<<<< HEAD
#include <stdio.h>
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
#include "batu.h"
#include "pinggir.h"
#include "pohon.h"
#include "lubang.h"
#include "segitiga.h"

int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {0,0};
float posisiY[2] = {0,20};

int movebatu = 40;
int movepohon = 40;
int movelubang = 40;
int movetri = 40;
<<<<<<< HEAD
int scorePoin=0;
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281

//batas
float colliderbatu [4]= {54.3,98,65.7,90};//x1,y1,x2,y2
float colliderular [4]= {79,27,81,10};
float collidersegitiga [4]={73,149,88,129};
float colliderbatang [4]={79,122,104,115};
float colliderlubang [4]={91,62,110.18,74};

//menggambar objek ular
void ObjekUlar(){
    glScalef(0.3,0.3,0);
    glTranslatef(4,0,0);
    glBegin(GL_QUADS);//Bagian Atas
    glColor3f(1, 1, 1);//warna objek
    glVertex2f(11,19); //A
    glVertex2f(14,19); //B
    glVertex2f(14,17); //C
    glVertex2f(11, 17); //D
    glEnd();

    glBegin(GL_QUADS);//mata kanan
    glColor3f(0,0,0);
    glVertex2f(13,17);//Q
    glVertex2f(14,17);//C
    glVertex2f(14,16);//L
    glVertex2f(13,16);//R
    glEnd();

    glBegin(GL_QUADS);//mata kanan
    glColor3f(0,0,0);
    glVertex2f(11,17); //D
    glVertex2f(12,17); //P
    glVertex2f(12,16); //O
    glVertex2f(11,16); //K
    glEnd();

    glBegin(GL_QUADS);//antaramata
    glColor3f(1,1,1);
    glVertex2f(12,17); //P
    glVertex2f(13,17);//Q
    glVertex2f(13,11); //V2
    glVertex2f(12,11); //U
    glEnd();

    glBegin(GL_QUADS);//bawah mata kanan
    glColor3f(1,1,1);
    glVertex2f(12,16); //O
    glVertex2f(14,16);//L
    glVertex2f(14,11); //M
    glVertex2f(13,11); //V2
    glEnd();

    glBegin(GL_QUADS);//bawah mata kiri
    glColor3f(1,1,1);
    glVertex2f(11,16); //K
    glVertex2f(13,16);//R
    glVertex2f(12,11); //U
    glVertex2f(11,11); //N
    glEnd();

    glBegin(GL_QUADS);//kepala kanan
    glColor3f(1,1,1);
    glVertex2f(14,17); //C
    glVertex2f(15,17);//E
    glVertex2f(15,14); //F
    glVertex2f(14,14); //G
    glEnd();

    glBegin(GL_QUADS);//kepala kiri
    glColor3f(1,1,1);
    glVertex2f(10,17); //H
    glVertex2f(11,17);//D
    glVertex2f(11,14); //J
    glVertex2f(10,14); //I
    glEnd();

    glBegin(GL_QUADS); //badan 2
    glColor3f(1,1,1);
    glVertex2f(14,12);//S
    glVertex2f(15,12);//T
    glVertex2f(15,7);//W
    glVertex2f(14,7);//new point
    glEnd();

    glBegin(GL_QUADS); //badan 2
    glColor3f(1,1,1);
    glVertex2f(12,11);//U
    glVertex2f(14,11);//M
    glVertex2f(14,7);//new point
    glVertex2f(12,7);//V
    glEnd();

    glBegin(GL_QUADS); //badan 3
    glColor3f(1,1,1);
    glVertex2f(12,7);//V
    glVertex2f(13,7);//B1
    glVertex2f(13,4);//C1
    glVertex2f(12,4);//new point
    glEnd();

    glBegin(GL_QUADS); //badan 3
    glColor3f(1,1,1);
    glVertex2f(10,8);//A1
    glVertex2f(12,8);//Z
    glVertex2f(12,4);//NEWPOINT
    glVertex2f(10,4);//D1
    glEnd();

    glBegin(GL_QUADS); //badan 4
    glColor3f(1,1,1);
    glVertex2f(13,5);//E1
    glVertex2f(14,5);//F1
    glVertex2f(14,2);//G1
    glVertex2f(13,2);//NEW POINT
    glEnd();

    glBegin(GL_QUADS); //badan 4
    glColor3f(1,1,1);
    glVertex2f(11,4);//I1
    glVertex2f(13,4);//C1
    glVertex2f(13,2);//NEW POINT
    glVertex2f(11,2);//H1
    glEnd();

    glBegin(GL_QUADS); //badan 5
    glColor3f(1,1,1);
    glVertex2f(14,3);//J1
    glVertex2f(15,3);//K1
    glVertex2f(15,-2);//L1
    glVertex2f(14,-2);//Q1
    glEnd();

    glBegin(GL_QUADS); //badan 5
    glColor3f(1,1,1);
    glVertex2f(12,2);//N1
    glVertex2f(14,2);//G1
    glVertex2f(14,-2);//Q1
    glVertex2f(12,-2);//M1
    glEnd();

    glBegin(GL_QUADS); //badan 6
    glColor3f(1,1,1);
    glVertex2f(11,-1);//P1
    glVertex2f(12,-1);//O1
    glVertex2f(12,-4);//NEW POINT
    glVertex2f(11,-4);//S1
    glEnd();

    glBegin(GL_QUADS); //badan 6
    glColor3f(1,1,1);
    glVertex2f(12,-2);//M1
    glVertex2f(14,-2);//Q1
    glVertex2f(14,-4);//R1
    glVertex2f(12,-4);//NEWPOINT
    glEnd();

    glBegin(GL_QUADS); //badan 7
    glColor3f(1,1,1);
    glVertex2f(10,-3);//U1
    glVertex2f(11,-3);//T1
    glVertex2f(11,-7);//E2
    glVertex2f(10,-7);//V1
    glEnd();

    glBegin(GL_QUADS); //badan 7
    glColor3f(1,1,1);
    glVertex2f(11,-4);//S1
    glVertex2f(13,-4);//Z1
    glVertex2f(13,-7);//W1
    glVertex2f(11,-7);//E2
    glEnd();

    glBegin(GL_QUADS); //badan 8
    glColor3f(1,1,1);
    glVertex2f(13,-6);//A2
    glVertex2f(14,-6);//B2
    glVertex2f(14,-10);//C2
    glVertex2f(13,-10);//I2
    glEnd();

    glBegin(GL_QUADS); //badan 8
    glColor3f(1,1,1);
    glVertex2f(11,-7);//E2
    glVertex2f(13,-7);//W1
    glVertex2f(13,-10);//I2
    glVertex2f(11,-10);//D2
    glEnd();

    glBegin(GL_QUADS); //badan 9
    glColor3f(1,1,1);
    glVertex2f(14,-9);//F2
    glVertex2f(15,-9);//G2
    glVertex2f(15,-12);//H2
    glVertex2f(14,-12);//N2
    glEnd();

    glBegin(GL_QUADS); //badan 9
    glColor3f(1,1,1);
    glVertex2f(13,-10);//I2
    glVertex2f(14,-10);//C2
    glVertex2f(14,-12);//N2
    glVertex2f(13,-12);//J2
    glEnd();

    glBegin(GL_QUADS); //badan 10
    glColor3f(1,1,1);
    glVertex2f(15,-11);//K2
    glVertex2f(16,-11);//L2
    glVertex2f(16,-12);//M2
    glVertex2f(15,-12);//H2
    glEnd();

    glBegin(GL_QUADS); //badan 11
    glColor3f(1,1,1);
    glVertex2f(14,-12);//N2
    glVertex2f(16,-12);//Q2
    glVertex2f(16,-13);//P2
    glVertex2f(14,-13);//O2
    glEnd();

    glBegin(GL_QUADS); //badan 12
    glColor3f(1,1,1);
    glVertex2f(14,-13);//R2
    glVertex2f(16,-13);//U2
    glVertex2f(16,-14);//T2
    glVertex2f(14,-14);//S2
    glEnd();

    glBegin(GL_QUADS); //ekor
    glColor3f(1,1,1);
    glVertex2f(13.5,-14);//R2
    glVertex2f(15,-14);//U2
    glVertex2f(15,-15.5);//T2
    glVertex2f(13.5,-15.5);//S2
    glEnd();
}

void UlarObjek(){
    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); //mengendalikan posisi ular
    glTranslatef(75,15,0); //menengahkan view
    ObjekUlar(); //memanggil view ular
    glPopMatrix();
}

//fungsi mengendalikan objek
void charController(int data)
{
//    //jika menekan tombol panah atas
//    if (GetAsyncKeyState(VK_UP)){
//        if (posisiY[5] <= 67){
//            posisiY[0] += 0.1f;
//            posisiY[5] += 0.5f;
//            verticalMove += 0.5f;
//        }
//    }
//    //jika menekan tombol panah bawah
//    else if (GetAsyncKeyState(VK_DOWN)){
//        if (posisiY[0] >= 0){
//            posisiY[0] -= 0.5f;
//            posisiY[5] -= 0.5f;
//            verticalMove -= 0.5f;
//        }
//    }
    //jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (posisiX[0] >= -28){
            posisiX[0] -= 0.5f;
            posisiX[5] -= 0.5f;
            colliderular[0] -= 0.5f;
            colliderular[2]-= 0.5f;
            horizontalMove -= 0.5f;
        }
    }
    //jika menekan tombol panah kanan
    else if (GetAsyncKeyState(VK_RIGHT)){
        if (posisiX[5] <= 28){
            posisiX[0] += 0.5f;
            posisiX[5] += 0.5f;
            colliderular[0] += 0.5f;
            colliderular[2]+= 0.5f;
            horizontalMove += 0.5f;
            }
    }

    glutPostRedisplay();
    glutTimerFunc(1,charController,0);
}

void triangle(){
    glPushMatrix();
    glTranslatef(20,45,0);
    segitiga();
    glPopMatrix();
}

void pinggiran(){
    glPushMatrix();
    glTranslatef(20,-20,0);
    pinggir();
    glPopMatrix();
}
void pinggiran1(){
    glPushMatrix();
    glTranslatef(10,-50,0);
    pinggir();
    glPopMatrix();
}
void pinggiran2(){
    glPushMatrix();
    glTranslatef(120,-55,0);
    pinggir();
    glPopMatrix();
}
void pinggiran3(){
    glPushMatrix();
    glTranslatef(150,-28,0);
    pinggir();
    glPopMatrix();
}
void pinggiran4(){
    glPushMatrix();
    glTranslatef(119,0,0);
    pinggir();
    glPopMatrix();
}
void Api(){
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.4, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(40.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.4, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(40.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.4, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(40.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.4, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(0.0, -2.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.7, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(-40.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.7, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(-40.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.7, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();

    glTranslatef(-40.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //Api
    glColor3f(1.0, 0.7, 0.0);
    glVertex2f(0,0); //M
    glVertex2f(41.97, 0.00); //N
    glVertex2f(41.97, 3.38); //A
    glVertex2f(40.93, 5.56); //B
    glVertex2f(37.79, 8.31); //B
    glVertex2f(38.27, 6.13); //B
    glVertex2f(37.89, 4.14); //B
    glVertex2f(35.99, 3.00); //B
    glVertex2f(33.81, 4.99); //B
    glVertex2f(33.62, 7.37); //B
    glVertex2f(31.24, 4.61); //B
    glVertex2f(30.29, 3.00); //B
    glVertex2f(28.97, 7.08); //B
    glVertex2f(26.97, 7.08); //B
    glVertex2f(26.59, 9.36); //B
    glVertex2f(24.69, 6.70); //B
    glVertex2f(23.56, 8.98); //B
    glVertex2f(21.66, 4.9); //B
    glVertex2f(18.90, 2.62); //B
    glVertex2f(16.44, 3.28); //B
    glVertex2f(15.01, 3.95); //B
    glVertex2f(14.92, 6.42); //B
    glVertex2f(13.30, 4.04); //B
    glVertex2f(12.16, 2.33); //B
    glVertex2f(11.03, 5.94); //B
    glVertex2f(9.13, 7.65); //B
    glVertex2f(9.12, 5.75); //B
    glVertex2f(7.80, 3.57); //B
    glVertex2f(5.99, 4.42); //B
    glVertex2f(5.43, 6.89); //B
    glVertex2f(6.09, 10.02); //B
    glVertex2f(2.58, 6.89); //B
    glVertex2f(0.87, 4.71); //B
    glVertex2f(0, 2.14); //B
    glEnd();
}
//void apiapi(){
//}

void gambarCollider() { //buat ngecek collider
    //glColor3b(120,120,120);
    glRectd(colliderbatu[0], colliderbatu[1], colliderbatu[2], colliderbatu[3]);
    glRectd(colliderular[0], colliderular[1], colliderular[2], colliderular[3]);
    glRectd(collidersegitiga[0], collidersegitiga[1], collidersegitiga[2], collidersegitiga[3]);
    glRectd(colliderbatang[0], colliderbatang[1], colliderbatang[2], colliderbatang[3]);
    glRectd(colliderlubang[0], colliderlubang[1], colliderlubang[2], colliderlubang[3]);
}

<<<<<<< HEAD
void text(int x, int y, const char *string, void *font, float r, float g, float b){
    // glScaled(1.5,1.5,0);
    glColor3f(r, g, b);
	glRasterPos2f(x, y);
	int len = (int)strlen(string);
	for (int i = 0; i < len; i++) {
		glutBitmapCharacter(font, string[i]);
	}
}

void timerScore(int){
    glutTimerFunc(100,timerScore,0);
    scorePoin+=1;
}

void scoreKamu (){
    glPushMatrix();
    text(28, 86, "Score : ", GLUT_BITMAP_HELVETICA_18,1.0,1.0,1.0);
    glPopMatrix();
}

void tempatScore (){
    glPushMatrix();
    char poin[1000];
    sprintf(poin, "%d", scorePoin);
    text(40, 86, poin, GLUT_BITMAP_HELVETICA_18,1.0, 1.0, 1.0);

    glPopMatrix();
}

void displayMe(void){


=======
void displayMe(void){

>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
    glBegin(GL_POLYGON); //warna background hutan
    glColor3b(2,70,20);
    glVertex2f(0, 0);
    glVertex2f(0, 90);
    glVertex2f(160, 90);
    glVertex2f(160, 0);
    glEnd();

    glBegin(GL_POLYGON); //warna jalan
    glColor3b(14,40,28);
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

    /*glBegin(GL_POLYGON);
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
    glEnd();*/

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(110, 0);
    glVertex2f(110, 90);
    glVertex2f(111, 90);
    glVertex2f(111, 0);
    glEnd();

    glutSwapBuffers();

    //Objek Batu
    //gambarCollider();
    glPushMatrix();
    glTranslatef(0,movebatu,0);
    batu();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,movelubang,0);
    lubang();
    glPopMatrix();

    pinggir();

    //segitiga();
    glPushMatrix();
    glTranslatef(0,movetri,0);
    triangle();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,movepohon,0);
    pohon();
    glPopMatrix();

    glClearColor(1,1,1,1);
    //glClear(GL_COLOR_BUFFER_BIT);
    //memanggil ular
    UlarObjek();
    //Api();
    pinggiran();
    pinggiran1();
    pinggiran2();
    pinggiran3();
    pinggiran4();
<<<<<<< HEAD
    scoreKamu();
    tempatScore();

=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
    glFlush();
    glutSwapBuffers();
}
void movement (int a){
    movebatu-- ;
    colliderbatu[1]--;
    colliderbatu[3]--;
    if (movebatu==-70){
        movebatu = 40;
        colliderbatu[1]=98;
        colliderbatu[3]=90;
    }
    glutTimerFunc(100,movement,1);//100 : berapa detik sekali movement dipanggil

    if(
    (colliderular[0]>=colliderbatu[0] && colliderular[0]<= colliderbatu[2])&&(colliderular[1]>=colliderbatu[1]&& colliderular[1]>=colliderbatu[3]) ||
    (colliderular[2]>=colliderbatu[0] && colliderular[2]<= colliderbatu[2])&&(colliderular[3]>=colliderbatu[1]&& colliderular[3]>=colliderbatu[3])
    ){
        horizontalMove=0;
        verticalMove=0;
        movebatu=40;
<<<<<<< HEAD
        scorePoin=0;
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
        colliderbatu[1]=98;//54.3,98,65.7,90
        colliderbatu[3]=90;
        colliderular[0]=79;
        colliderular[1]=27;
        colliderular[2]=81;
        colliderular[3]=8;
    }
}

void move2 (int a){//79,122,104,115
    movepohon-- ;
    colliderbatang[1]--;
    colliderbatang[3]--;
    if (movepohon == -80){
        movepohon = 40;
        colliderbatang[1]=122;
        colliderbatang[3]=115;
    }
    glutTimerFunc(100,move2,1);

    if(
    (colliderular[0]>=colliderbatang[0] && colliderular[0]<= colliderbatang[2])&&(colliderular[1]>=colliderbatang[1]&& colliderular[1]>=colliderbatang[3]) ||
    (colliderular[2]>=colliderbatang[0] && colliderular[2]<= colliderbatang[2])&&(colliderular[3]>=colliderbatang[1]&& colliderular[3]>=colliderbatang[3])
    ){
        horizontalMove=0;
        verticalMove=0;
        movepohon=40;
<<<<<<< HEAD
        scorePoin=0;
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
        colliderbatang[1]=122;
        colliderbatang[3]=115;
        colliderular[0]=79;
        colliderular[1]=27;
        colliderular[2]=81;
        colliderular[3]=8;
    }
}

void movelubang2 (int a){//91,74,110.18,62
    movelubang-- ;
    colliderlubang[1]--;
    colliderlubang[3]--;
    if (movelubang == -70){
        movelubang = 70;
        colliderlubang[1]=112;
        colliderlubang[3]=124;
    }
    glutTimerFunc(100,movelubang2,1);

    if(
    (colliderular[0]>=colliderlubang[0] && colliderular[0]<= colliderlubang[2])&&(colliderular[1]>=colliderlubang[1]&& colliderular[1]>=colliderlubang[3]) ||
    (colliderular[2]>=colliderlubang[0] && colliderular[2]<= colliderlubang[2])&&(colliderular[3]>=colliderlubang[1]&& colliderular[3]>=colliderlubang[3])
    ){
        horizontalMove=0;
        verticalMove=0;
        movelubang=90;
<<<<<<< HEAD
        scorePoin=0;
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
        colliderlubang[1]=112;
        colliderlubang[3]=124;
        colliderular[0]=79;
        colliderular[1]=27;
        colliderular[2]=81;
        colliderular[3]=8;
    }
}

void movetriangle (int a){//73,149,88,129
    movetri-- ;
    collidersegitiga[1]--;
    collidersegitiga[3]--;
    if (movetri == -200){
        movetri = 40;
        collidersegitiga[1]=149;
        collidersegitiga[3]=129;
    }
    glutTimerFunc(100,movetriangle,1);

    if(
    (colliderular[0]>=collidersegitiga[0] && colliderular[0]<= collidersegitiga[2])&&(colliderular[1]>=collidersegitiga[1]&& colliderular[1]>=collidersegitiga[3]) ||
    (colliderular[2]>=collidersegitiga[0] && colliderular[2]<= collidersegitiga[2])&&(colliderular[3]>=collidersegitiga[1]&& colliderular[3]>=collidersegitiga[3])
    ){
        horizontalMove=0;
        verticalMove=0;
        movetri=40;
<<<<<<< HEAD
        scorePoin=0;
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
        collidersegitiga[1]=149;
        collidersegitiga[3]=129;
        colliderular[0]=79;
        colliderular[1]=27;
        colliderular[2]=81;
        colliderular[3]=8;
    }
}

<<<<<<< HEAD


=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
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
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Alpha Version");
    gluOrtho2D(0, 160, 0, 90);
    glutDisplayFunc(displayMe);
    glutTimerFunc(100,movement,1);
    glutTimerFunc(100,move2,1);
    glutTimerFunc(100,movelubang2,1);
    glutTimerFunc(100,movetriangle,1);
    glutTimerFunc(1,charController,0);
<<<<<<< HEAD
    glutTimerFunc(100,timerScore,0);
=======
>>>>>>> e12971976732f7b500a096f2c1cad7046d5dc281
    myinit();
    glutMainLoop();
    return 0;
}
