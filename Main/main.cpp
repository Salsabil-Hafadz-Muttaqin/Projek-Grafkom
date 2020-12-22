#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include "batu.h"

int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {0,20};
float posisiY[2] = {0,20};

//menggambar objek ular
void ObjekUlar(){
    glScalef(0.4,0.4,0);
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
    //Memasang collider pada objek ular
    //ColliderPersegi();

    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); //mengendalikan posisi ular
    glTranslatef(75,15,0); //menengahkan view
    ObjekUlar(); //memanggil view ular
    glPopMatrix();
}

//fungsi mengendalikan objek
void charController(int data)
{
    //jika menekan tombol panah atas
    if (GetAsyncKeyState(VK_UP)){
        if (posisiY[5] <= 67){
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
        if (posisiX[5] <= 28){
            posisiX[0] += 0.1f;
            posisiX[5] += 0.1f;
            horizontalMove += 0.1f;
            }
    }

    glutPostRedisplay();
    glutTimerFunc(1,charController,0);
}

void pinggir(){
    glBegin(GL_POLYGON); //PINGGIRAN pojok kiri atas
    glColor3b(596, 302,25);
    glVertex2f(5.45442, 86.0824);//c4
    glVertex2f(8.17462, 88.07024);
    glVertex2f(10.58095, 88.27949);
    glVertex2f(14.19653, 87.75637);
    glVertex2f(15.34738, 86.5009);
    glVertex2f(15.03351, 84.30381);
    glVertex2f(13.04567, 83.46683);
    glVertex2f(9.32547, 83.57145);
    glVertex2f(6.60527, 84.40843);//e5
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(596,302,25);
    glVertex2f(5.45442, 86.0824);//c4
    glVertex2f(6.60527, 84.40843);//e5
    glVertex2f(9.32547, 83.57145);//d5
    glVertex2f(13.04567, 83.46683);//c5
    glVertex2f(15.03351, 84.30381);//b5
    glVertex2f(15.34738, 86.5009);//s4
    glVertex2f(14.28479, 79.0226);//l5
    glVertex2f(15.3813, 71.95829);//j5
    glVertex2f(15.59005, 68.7945);//k5
    glVertex2f(11.08943, 67.55026);//j6
    glVertex2f(10.01234, 68.70163);//i6
    glVertex2f(9.38094, 71.45007);//h6
    glVertex2f(8.78668, 74.12422);//g6
    glVertex2f(6.81821, 77.42977);//f6
    glVertex2f(5.97753, 78.86341);//f5
    glEnd();

    glBegin(GL_POLYGON);
    glColor3b(596,290,0);
    glVertex2f(15.59005, 68.7945);//k5
    glVertex2f(11.08943, 67.55026);
    glVertex2f(9.01234, 68.70163);
    glVertex2f(9.38094, 71.45007);
    glVertex2f(7.78668, 74.12422);
    glVertex2f(7.81821, 77.42977);
    glVertex2f(5.97753, 78.86341);//f5
    glVertex2f(6.65309, 71.8499);//g5
    glVertex2f(7.23301, 66.99477);//h5
    glVertex2f(10.86262, 67.84395);//L5
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3b(478, 243, 055);
    glVertex2f(8.81363, 81.55906);//l6
    glVertex2f(8.72436, 74.06098);//m6
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3b(478, 243, 055);
    glVertex2f(10.37601, 80.83611);//n6
    glVertex2f(10.30859, 70.81389);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3b(478, 243, 055);
    glVertex2f(12.36473, 80.81368);//p6
    glVertex2f(12.2299, 73.29693);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3b(478,243,055);
    glVertex2f(5.45442, 86.0824);//c4
    glVertex2f(8.17462, 88.07024);
    glVertex2f(10.58095, 88.27949);
    glVertex2f(14.19653, 87.75637);
    glVertex2f(15.34738, 86.5009);
    glVertex2f(15.03351, 84.30381);
    glVertex2f(13.04567, 83.46683);
    glVertex2f(9.32547, 83.57145);
    glVertex2f(6.60527, 84.40843);//e5
    glVertex2f(5.45442, 86.0824);//c4
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3b(478,243,055);
    glVertex2f(5.45442, 86.0824);//c4
    glVertex2f(6.60527, 84.40843);//e5
    glVertex2f(9.32547, 83.57145);//d5
    glVertex2f(13.04567, 83.46683);//c5
    glVertex2f(15.03351, 84.30381);//b5
    glVertex2f(15.34738, 86.5009);//s4
    glVertex2f(14.28479, 79.0226);//l5
    glVertex2f(15.3813, 71.95829);//j5
    glVertex2f(15.59005, 68.7945);//k5
    glVertex2f(11.08943, 67.55026);//j6
    glVertex2f(10.86262, 67.84395);//L5
    glVertex2f(7.23301, 66.99477);//h5
    glVertex2f(6.65309, 71.8499);//g5
    glVertex2f(5.97753, 78.86341);//f5
    glVertex2f(5.45442, 86.0824);//c4
    glEnd();

    glBegin(GL_LINE_STRIP);//mlungker
    glColor3b(478,243,055);
    glVertex2f(11.68379, 84.62869);
    glVertex2f(10.18483, 84.58989);
    glVertex2f(8.20711, 84.92927);
    glVertex2f(7.87454, 86.14842);
    glVertex2f(8.80966, 87.28523);//a6
    glVertex2f(10.00055, 87.57435);
    glVertex2f(12.95238, 87.5843);
    glVertex2f(13.50344, 86.92);//v5
    glVertex2f(13.75393, 86.11);
    glVertex2f(13.60562, 85.4);
    glVertex2f(11.80418, 85.29);
    glVertex2f(8.76272, 85.5);//r5
    glVertex2f(8.53754, 86);
    glVertex2f(9.24123, 86.9);
    glVertex2f(10.62046, 86.7);
    glVertex2f(10.52156, 86);
    glVertex2f(9.54969, 86.08148);
    glEnd();
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

    //glTranslatef(40.0, 0.0, 0.0);
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

    //glTranslatef(40.0, 0.0, 0.0);
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

    //glTranslatef(40.0, 0.0, 0.0);
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

    //glTranslatef(0.0, -2.0, 0.0);
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

    //glTranslatef(-40.0, 0.0, 0.0);
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

    //glTranslatef(-40.0, 0.0, 0.0);
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

    //glTranslatef(-40.0, 0.0, 0.0);
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

//glPushMatrix();
  //  glRotate(90, 0, 0, 1.0);
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

    //Objek Batu
    batu();
    pinggir();
    glClearColor(1,1,1,1);
    //glClear(GL_COLOR_BUFFER_BIT);
    //memanggil ular
    UlarObjek();
    Api();
    pinggiran();
    pinggiran1();
    pinggiran2();
    pinggiran3();
    pinggiran4();
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
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Ver 1.2");
    gluOrtho2D(0, 160, 0, 90);
    glutDisplayFunc(displayMe);
    glutTimerFunc(1,charController,0);
    myinit();
    glutMainLoop();
    return 0;
}
