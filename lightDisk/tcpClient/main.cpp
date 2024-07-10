#include "tcpclient.h"

#include <QApplication>
#include <QDebug>
//#include "opewidget.h"
//#include "online.h"
//#include "friend.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("Times", 24, QFont::Bold);
    a.setFont(font);

//    OpeWidget w;
//    Online w;
//    Friend w;

//    TcpClient w;
//    w.show();

    TcpClient::getInstance().show();

    TcpClient::getInstance().show();


    return a.exec();

}
