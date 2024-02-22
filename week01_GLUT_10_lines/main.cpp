#include <GL/glut.h>///18行留下來

void display ()
{
    glutSolidTeapot(0.3);
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
