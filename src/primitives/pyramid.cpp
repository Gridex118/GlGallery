#define GL_GLEXT_PROTOTYPES
#include "primitives.hpp"

void draw_pyramid(GLdouble rX, GLdouble rY, GLdouble rZ) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glViewport(0, 0, WIN_WIDTH, WIN_HEIGHT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    if (ASPECT_RATIO > 1)
        glOrtho(-100*ASPECT_RATIO, 100*ASPECT_RATIO, -100, 100, -100, 100);
    else
        glOrtho(-100, 100, -100/ASPECT_RATIO, 100/ASPECT_RATIO, -100, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glRotatef(rX, 1.0f, 0.0f, 0.0f);
    glRotatef(rY, 0.0f, 0.1f, 0.0f);
    glRotatef(rZ, 0.0f, 0.0f, 0.1f);

    glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 1.0f, 0.0f);
            glVertex3f(0.0f, 0.0f, -50.0f);
            glVertex3f(-50.0f, 0.0f, 50.0f);
            glVertex3f(50.0f, 0.0f, 50.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 0.8f, 0.0f);
            glVertex3f(0.0f, 0.0f, -50.0f);
            glVertex3f(50.0f, 0.0f, 50.0f);
            glVertex3f(0.0f, 50.0f, 0.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 0.6f, 0.0f);
            glVertex3f(0.0f, 0.0f, -50.0f);
            glVertex3f(-50.0f, 0.0f, 50.0f);
            glVertex3f(0.0f, 50.0f, 0.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f(0.0f, 0.4f, 0.0f);
            glVertex3f(0.0f, 50.0f, 0.0f);
            glVertex3f(-50.0f, 0.0f, 50.0f);
            glVertex3f(50.0f, 0.0f, 50.0f);
    glEnd();

    glutSwapBuffers();
}

