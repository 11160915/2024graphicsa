#include <GL/glut.h>///18行留下來
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

int main(int argc, char *argv[])///138行
{
    glutInit(&argc, argv);  ///140行
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("2024電腦圖學第03周");///145行
    glutDisplayFunc(display); ///148行
    glutMouseFunc(mouse);

    glutMainLoop();///174行
}
