#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->pushButton,&QPushButton::clicked,this,[=]{
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=]{
        ui->stackedWidget->setCurrentIndex(0);
    });
}

Widget::~Widget()
{
    delete ui;
}

