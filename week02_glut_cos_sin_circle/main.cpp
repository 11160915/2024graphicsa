#include <GL/glut.h>///18行留下來
#include <math.h>
void myCircle(float x, float y, float r){
    glBegin(GL_POLYGON);
    for(float a=0;a<=3.1415*2;a+=0.1){
        glVertex2f( r*cos(a)+x, r*sin(a)+y);
    }
    glEnd();
}
void display()
{
    myCircle(0.5,0.5,0.3);
    myCircle(-0.5,0.5,0.3);
    myCircle(0,-0.1,0.6);
    glutSwapBuffers();
}


int main(int argc, char *argv[])///138行
{
    glutInit(&argc, argv);  ///140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("2024電腦圖學第01周");///145行
    glutDisplayFunc(display); ///148行

    glutMainLoop();///174行
}
