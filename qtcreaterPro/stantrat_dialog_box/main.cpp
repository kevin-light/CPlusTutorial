#include "mainwindow.h"

#include <QApplication>

//#include "form.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    Form f;
//    f.show();

    return a.exec();
}
