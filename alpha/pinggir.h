#ifndef PINGGIR_H_INCLUDED
#define PINGGIR_H_INCLUDED



#endif // PINGGIR_H_INCLUDED
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
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
