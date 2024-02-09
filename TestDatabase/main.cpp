#include "dbwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DBWindow w;
    w.show();
    return a.exec();
}
