#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QTcpServer>
#include "mytcpsocket.h"

class MyTcpServer : public QTcpServer
{
    Q_OBJECT // 用来支持信号槽
public:
    MyTcpServer();

    static MyTcpServer &getInstance(); // 单例模式

    void incomingConnection(qintptr socketDescriptor);
    void resend(const char *pername, PDU *pdu);

private:
    QList<MyTcpSocket*> m_tcpSocketList;

public slots:
    void deleteSocket(MyTcpSocket *mySocket);

};

#endif // MYTCPSERVER_H
