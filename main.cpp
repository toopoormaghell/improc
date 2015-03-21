#include "IpMainWindow.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IpMainWindow w;
    w.show();

    return a.exec();
}
