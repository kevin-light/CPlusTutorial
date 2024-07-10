#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H
#include <QTcpSocket>
#include "protocol.h"
#include "opedb.h"

class MyTcpSocket : public QTcpSocket
{
    Q_OBJECT // 宏用来支持槽函数
public:
    MyTcpSocket();
    QString getName();

signals:
    void offline(MyTcpSocket *mysocket);


public slots:
    void recvMsg();
    void clientOffline();

private:
    QString m_strName;
};

#endif // MYTCPSOCKET_H
