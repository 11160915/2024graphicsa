#include <GL/glut.h>///18��d�U��
#include <stdio.h>
void mouse(int button,int state, int x,int y)
{
    ///printf("%d %d %d %d\n", button,state,x,y);
    if(state==GLUT_DOWN)
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0);\n", x,y);
}
void display ()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}

int main(int argc, char *argv[])///138��
{
    glutInit(&argc, argv);  ///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("2024�q���Ͼǲ�03�P");///145��
    glutDisplayFunc(display); ///148��
    glutMouseFunc(mouse);

    glutMainLoop();///174��
}
