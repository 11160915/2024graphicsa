#include <GL/glut.h>///18��d�U��

void display ()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])///138��
{
    glutInit(&argc, argv);  ///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("2024�q���Ͼǲ�01�P");///145��
    glutDisplayFunc(display); ///148��

    glutMainLoop();///174��
}
