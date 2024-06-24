#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QMovie>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    // 手写代码
    ui->setupUi(this);
    QLabel *labs = new QLabel(this);
    labs->setText("这是手写代码创建的label标签");
    labs->setText("<a href=\"https://www.baidu.com\">百度一下</a>");
    labs->setOpenExternalLinks(true);
    QLineEdit *edit = new QLineEdit(this);
    edit->setText("手写代码的编辑框");


    // ui生成后引用
    ui->label->setText("<a href=\"https://www.baidu.com\">百度一下</a>");
    ui->label->setOpenExternalLinks(true); // 设置连接可以点击打卡

    QPixmap pixmap;
    pixmap.load(":/Image/bk.jpg");
    ui->label_2->setPixmap(pixmap);

    QMovie *movie = new QMovie(":/Image/mario.gif");
    ui->label_3->setMovie(movie);
    movie->start();
    connect(ui->pushButton,&QPushButton::clicked, this, [=]{
        movie->stop();
    });

    QString str = ui->lineEdit->text();
    qDebug()<<str;
    ui->lineEdit->setEchoMode(QLineEdit::Password);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_label_2_linkActivated(const QString &link)
{

}
