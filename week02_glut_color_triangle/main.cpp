#include <GL/glut.h>///18行留下來

void display ()
{
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(+1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
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
