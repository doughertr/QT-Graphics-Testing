#include "DisplayWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    DisplayWindow window;

    window.show();

    return application.exec();
}
