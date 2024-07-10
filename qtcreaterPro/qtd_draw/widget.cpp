#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(800,500);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *p)
{
    QPainter painter(this);
    painter.drawLine(80,100,500,500);
    painter.setPen(Qt::red);
    painter.drawRect(10,10,100,300);
    painter.setPen(QPen(Qt::blue,5));
    painter.drawEllipse(200,200,100,300);
    qDebug()<<"----------";
}

