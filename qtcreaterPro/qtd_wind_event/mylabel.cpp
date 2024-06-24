#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent)
{
   this->setMouseTracking(true); // 设置鼠标追踪模式
}

void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    qDebug()<<"鼠标按下标签";
}

void MyLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    qDebug()<<"鼠标抬起标签";

}

void MyLabel::mouseMoveEvent(QMouseEvent *ev)
{
    qDebug()<<"鼠标追踪模式标签"<< ev->x()<< ev->y();
    QString str;
    str.sprintf("<center><h2>（%d, %d）</h2> </center>", ev->x(), ev->y());
    this->setText(str);

}
