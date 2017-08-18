#include "DisplayWindow.h"
#include "ui_mainwindow.h"

#include "include/Vector2.h"
#include <QGLFunctions>

void DisplayWindow::initializeGL()
{
    //add gl init?
    initializeGLFunctions();

    GLfloat verts[] =
    {
        +0.0f, +0.0f,
        +1.0f, +1.0f,
        -1.0f, +1.0f,

        +0.0f, +0.0f,
        -1.0f, -1.0f,
        +1.0f, -1.0f,
    };
    GLuint myBufferID;
    Math::Vector2 vec;
    glGenBuffers(1, &myBufferID);
    glBindBuffer(GL_ARRAY_BUFFER, myBufferID);
    glBufferData(GL_ARRAY_BUFFER, sizeof(verts), &verts, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);

    GLushort indicies[] = {0,1,2,
                           0,3,4};
    GLuint indexBufferID;
    glGenBuffers(1, &indexBufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indicies), indicies, GL_STATIC_DRAW);
}
void DisplayWindow::paintGL()
{
    glViewport(0, 0, width(), height());
    //glDrawArrays(GL_TRIANGLES, 0, 6);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT, 0);
}
