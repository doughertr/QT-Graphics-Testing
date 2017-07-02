#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <QMainWindow>
#include <QtOpenGL/QGLWidget>
#include <QGLFunctions>

class DisplayWindow : public QGLWidget, protected QGLFunctions
{
public:

protected:
    void paintGL();
    void initializeGL();
};
#endif // MAINWINDOW_H
