#include "tcpserver.h"
#include "ui_tcpserver.h"
#include "mytcpserver.h"
#include <QMessageBox>
#include <QFile>
#include <QDebug>
#include <QHostAddress>

TcpServer::TcpServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TcpServer)
{
    ui->setupUi(this);

    loadConfig();
    MyTcpServer::getInstance().listen(QHostAddress(m_strIP),m_usPort);
}

TcpServer::~TcpServer()
{
    delete ui;
}

void TcpServer::loadConfig()
{

    QFile file(":/server.config");

    if (file.open(QIODevice::ReadOnly)){
       QByteArray baData = file.readAll();
//       QString strData = baData.toStdString().c_str();
       QString strData = QString::fromUtf8(baData); // 假设文件内容是UTF-8编码的

       qDebug() << strData;
       file.close();
       strData.replace("\r\n", " ");

       QStringList strList = strData.split(" ");
//       for (int i = 0; i<strList.size(); i++){
//           qDebug() << "---> " << strList[i];
//       }
        m_strIP = strList.at(0);
        m_usPort = strList.at(1).toUShort();
        qDebug() << "ip:" << m_strIP << " port:" << m_usPort;

    }else{
        QMessageBox::critical(this, "open config", "open failed");

    }
}

