#include <QtGui/QApplication>
#include "qtsteammainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtSteamMainWindow w;
    w.show();
    //y.show();

    return a.exec();
}
