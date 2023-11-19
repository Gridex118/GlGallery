#include "primitives/primitives.hpp"

GLdouble rX = 0;
GLdouble rY = 0;
GLdouble rZ = 0;

void render_scene() {
    draw_pyramid(rX, rY, rZ);
}

void handle_keyboard(unsigned char key, int x, int y) {
    if (key == 'h') rY += 10;
    else if (key == 'l') rY -= 10;
    else if (key == 'k') rX += 10;
    else if (key == 'j') rX -= 10;
    else if (key == 'q') rZ += 10;
    else if (key == 'e') rZ -= 10;
    glutPostRedisplay();
}

void setup_context() {
    glClearColor(0.09f, 0.09f, 0.09f, 1.0f);
    glEnable(GL_LINE_SMOOTH | GL_POLYGON_SMOOTH | GL_DEPTH_TEST);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(WIN_WIDTH, WIN_HEIGHT);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("PyramidGLProjFloat");
    glutDisplayFunc(render_scene);
    glutKeyboardFunc(handle_keyboard);
    setup_context();
    glutMainLoop();
    return 0;
}

