#include <windows.h>
#include <GL/glut.h>
#include <GL/gl.h>

int angle;
float horizontalMove;
float verticalMove;

// Collider
float posisiX[2] = {0,20};
float posisiY[2] = {0,20};

void ColliderPersegi(){ //Collider berbentuk kotak
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.2,0.7);
    glVertex2f(0,0);
    glVertex2f(5,0);
    glVertex2f(5,5);
    glVertex2f(0,5);
    glEnd();
    glPopMatrix();
}

//menggambar objek ular
void ObjekUlar(){
    glRotatef(angle,0,0,1);
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.5);
    glVertex2f(80, 5);
    glVertex2f(81, 19);
    glVertex2f(80.5, 20);
    glVertex2f(79.5, 20);
    glVertex2f(79, 19);
    glEnd();
}

void UlarObjek(){
    //Memasang collider pada objek ular
    ColliderPersegi();

    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); //mengendalikan posisi ular
    glTranslatef(-28,0,0); //menengahkan view
    ObjekUlar(); //memanggil view ular
    glPopMatrix();
}

//fungsi mengendalikan objek
void charController(int data)
{
    //jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (posisiX[0] >= 0){
            posisiX[0] -= 0.1f;
            posisiX[5] -= 0.1f;
            horizontalMove -= 0.1f;
            }
    }
    //jika menekan tombol panah kanan
    else if (GetAsyncKeyState(VK_RIGHT)){
        if (posisiX[5] <= 57){
            posisiX[0] += 0.1f;
            posisiX[5] += 0.1f;
            horizontalMove += 0.1f;
            }
    }
    //jika menekan tombol panah atas
    if (GetAsyncKeyState(VK_UP)){
        if (posisiY[5] <= 70){
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
    glutInitWindowSize(1000, 1000);
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
