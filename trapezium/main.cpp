#include <GL/glut.h>

GLfloat angle = 0.0f;  // Sudut rotasi

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0f, 0.0f, -5.0f);  // Pindahkan objek ke dalam bidang pandang kamera
    glRotatef(angle, 0.0f, 1.0f, 0.0f);  // Rotasi objek di sekitar sumbu Y

    glBegin(GL_QUADS);
        // Bottom face
        glColor3f(1.0f, 0.0f, 0.0f);  // Warna merah
        glVertex3f(0.5, 0.0, -0.5);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(-0.5, 0.0, 0.5);
        glVertex3f(-0.5, 0.0, -0.5);

        // Top face
        glColor3f(0.0f, 1.0f, 0.0f);  // Warna hijau
        glVertex3f(0.3, 0.5, -0.3);
        glVertex3f(0.3, 0.5, 0.3);
        glVertex3f(-0.3, 0.5, 0.3);
        glVertex3f(-0.3, 0.5, -0.3);

        // Front face
        glColor3f(0.0f, 0.0f, 1.0f);  // Warna biru
        glVertex3f(0.5, 0.0, -0.5);
        glVertex3f(-0.5, 0.0, -0.5);
        glVertex3f(-0.3, 0.5, -0.3);
        glVertex3f(0.3, 0.5, -0.3);

        // Back face
        glColor3f(1.0f, 1.0f, 0.0f);  // Warna kuning
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(-0.5, 0.0, 0.5);
        glVertex3f(-0.3, 0.5, 0.3);
        glVertex3f(0.3, 0.5, 0.3);

        // Left face
        glColor3f(0.0f, 1.0f, 1.0f);  // Warna cyan
        glVertex3f(-0.5, 0.0, -0.5);
        glVertex3f(-0.5, 0.0, 0.5);
        glVertex3f(-0.3, 0.5, 0.3);
        glVertex3f(-0.3, 0.5, -0.3);

        // Right face
        glColor3f(1.0f, 0.0f, 1.0f);  // Warna magenta
        glVertex3f(0.5, 0.0, -0.5);
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.3, 0.5, 0.3);
        glVertex3f(0.3, 0.5, -0.3);
    glEnd();

    glutSwapBuffers();  // Tukar buffer untuk mencegah flickering
}

void update(int value)
{
    angle += 2.0f;  // Perbarui sudut rotasi
    if (angle > 360)
        angle -= 360;

    glutPostRedisplay();  // Perbarui tampilan
    glutTimerFunc(16, update, 0);  // Setel ulang timer
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("3D Trapezium");
    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(displayMe);
    glutTimerFunc(25, update, 0);  // Atur timer untuk rotasi
    glutMainLoop();
    return 0;
}
