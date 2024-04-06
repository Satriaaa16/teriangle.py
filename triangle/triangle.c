#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPointSize(5.0f);  // Atur ukuran titik
    glBegin(GL_POINTS);
        glColor3f(1.0f, 0.0f, 0.0f);  // Warna merah
        glVertex3f(0.0f, 0.0f, 0.0f);  // Koordinat titik
    glEnd();

    glutSwapBuffers();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  // Warna latar belakang putih
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("1D Object (Point)");

    glutDisplayFunc(display);
    init();

    glutMainLoop();

    return 0;
}
