#include "UseUItoAnotherClass.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UseUItoAnotherClass w;
    w.show();
    return a.exec();
}
