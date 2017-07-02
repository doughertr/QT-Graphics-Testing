#include "DisplayWindow.h"
#include "ui_mainwindow.h"

#include <QGLFunctions>

void DisplayWindow::initializeGL()
{
    //add gl init?
    initializeGLFunctions();

    GLfloat verts[] =
    {
        +0.0f, +1.0f,
        -1.0f, -1.0f,
        +1.0f, -1.0f,
    };
    glGenBuffers();

}
void DisplayWindow::paintGL()
{
   glClearColor(1, 0, 0, 1);
   glClear(GL_COLOR_BUFFER_BIT);
}
