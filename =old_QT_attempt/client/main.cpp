#include "CMainWindow.h"
#include <QApplication>

#include <simple.h>


int main(int argc, char *argv[])
{
    simple();

    QApplication a(argc, argv);
    CMainWindow w;
    w.show();

    return a.exec();
}
