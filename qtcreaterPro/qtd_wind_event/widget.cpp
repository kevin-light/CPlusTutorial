#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    edit = new QTextEdit();
    edit->setFixedSize(600,200);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *event)
{
    int ret = QMessageBox::question(this,"提示","您确定要关闭窗口吗？");
    if (ret == QMessageBox::Yes){
        event->accept();
    }else {
    event->ignore();
    }
}

void Widget::resizeEvent(QResizeEvent *event)
{
    qDebug()<<"old size=" << event->oldSize();
    qDebug()<<"new size=" << event->size();

}

bool Widget::event(QEvent *event)
{
//    判断 事件类型（键盘事件）
    if (event->type() == QEvent::KeyPress){

        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if(keyEvent->key() == Qt::Key_Tab){
            qDebug()<<"Tab 被按下";
            return true;
        }
    }
    return QWidget::event(event);
//    return false; // edit编辑输入框不能输入

}

