#include <GL/glut.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_QUADS);
        // Bottom face
        glVertex3f(0.5, 0.0, -0.5);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(-0.5, 0.0, 0.5);
        glVertex3f(-0.5, 0.0, -0.5);

        // Top face
        glVertex3f(0.3, 0.5, -0.3);
        glVertex3f(0.3, 0.5, 0.3);
        glVertex3f(-0.3, 0.5, 0.3);
        glVertex3f(-0.3, 0.5, -0.3);

        // Front face
        glVertex3f(0.5, 0.0, -0.5);
        glVertex3f(-0.5, 0.0, -0.5);
        glVertex3f(-0.3, 0.5, -0.3);
        glVertex3f(0.3, 0.5, -0.3);

        // Back face
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(-0.5, 0.0, 0.5);
        glVertex3f(-0.3, 0.5, 0.3);
        glVertex3f(0.3, 0.5, 0.3);

        // Left face
        glVertex3f(-0.5, 0.0, -0.5);
        glVertex3f(-0.5, 0.0, 0.5);
        glVertex3f(-0.3, 0.5, 0.3);
        glVertex3f(-0.3, 0.5, -0.3);

        // Right face
        glVertex3f(0.5, 0.0, -0.5);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.3, 0.5, 0.3);
        glVertex3f(0.3, 0.5, -0.3);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("3D Trapezium");
    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
