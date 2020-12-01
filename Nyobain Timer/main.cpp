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
    glColor3f(0,0,0);
    glVertex2f(0.1,1);
    glVertex2f(1.5,1);
    glVertex2f(1.2,2);
    glVertex2f(1.46,3);
    glVertex2f(1.37,4);
    glVertex2f(1.3,4.3);
    glVertex2f(1.39,4.6);
    glVertex2f(1.09,4.99);
    glVertex2f(1,4.99);
    glVertex2f(0.7,4.61);
    glVertex2f(0.84,4.31);
    glVertex2f(0.78,4);
    glVertex2f(0.8,3);
    glVertex2f(1,1);
    glEnd();
}

void UlarObjek(){
    //Memasang collider pada objek ular
    ColliderPersegi();

    glPushMatrix();
    glTranslatef(horizontalMove, verticalMove,0); //mengendalikan posisi ular
    glTranslatef(20,20,0); //menengahkan view
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
        if (posisiX[5] <= 50){
            posisiX[0] += 0.1f;
            posisiX[5] += 0.1f;
            horizontalMove += 0.1f;
            }
    }
    //jika menekan tombol panah atas
    if (GetAsyncKeyState(VK_UP)){
        if (posisiY[5] <= 50){
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
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
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
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Nyobain Timer");
    gluOrtho2D(0,50,0,50);
    glutDisplayFunc(displayMe);
    glutTimerFunc(1,charController,0);
    glutKeyboardFunc(keyboard);
    myinit();
    glutMainLoop();
    return 0;
}
