#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QWidget>
#include <QFile>
#include <QTcpSocket>
#include "protocol.h"
#include "opewidget.h"
#include <QList>

//QT_BEGIN_NAMESPACE
namespace Ui { class TcpClient; }
//QT_END_NAMESPACE

class TcpClient : public QWidget
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = 0);
    ~TcpClient();
    void loadConfig();

    static TcpClient &getInstance(); // TcpClient的单例模式，main不能直接调用了，也要改为单例调用
    QTcpSocket &getTcpSocket();

    QString loginName();

public slots:
    void showConnect();
    void recvMsg();


private slots:
//    void on_sendpb_clicked();
//    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_login_pb_clicked();
    void on_register_pb_clicked();
    void on_cancel_pb_clicked();

private:
    Ui::TcpClient *ui;
    QString m_strIP;
    quint16 m_usPort;
    QTcpSocket m_tcpSocket;   //    连接服务器，和数据库交互
    QString m_strLoginName;
//    static QList<TcpClient*> windows;

};
//QList<TcpClient*> TcpClient::windows;
//void createAndShowNewWindow() {
//    TcpClient *newWindow = new TcpClient();
//    newWindow->show();
//    TcpClient::windows.append(newWindow);
//}
#endif // TCPCLIENT_H
