#include <GL/glut.h>///18��d�U��
#include <stdio.h>
float teapotX = 0, teapotY = 0;
float angle = 0;
void mouse(int button,int state, int x,int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void display ()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef(angle,0,0,1);
        ///glTranslatef(teapotX, teapotY, 0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x,int y)
{
    angle = x;
    display();
}
int main(int argc, char *argv[])///138��
{
    glutInit(&argc, argv);  ///140��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("week03 mouse rotate");///145��
    glutDisplayFunc(display); ///148��
    glutMouseFunc(mouse);
    glutMotionFunc(motion);

    glutMainLoop();///174��
}