#include "widget.h"
#include "mybutton.h"
#include <QPushButton>
#include "teacher.h"
#include "student.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
//    QPushButton *button = new QPushButton;

//    button->setParent(this);

//    button->setText("这是一个窗口");
//    button->move(100,100);
//    button->setFixedSize(500,500);

//    //2
//    QPushButton *button2 = new QPushButton("窗口2",this);
//    button2->move(10,10);
//    this->resize(600,400);

//    //3:
//    MyButton *button3 = new MyButton();
//    button3->setParent(this);
//    button3->setText("自定义按钮");

//    // 4 signal; slots 信号与曹
//    QPushButton *button4 = new QPushButton("点击关闭窗口", this);
//    this->resize(300,400);
//    connect(button4, &QPushButton::clicked,this,&Widget::close);

//    // 5 signal; slots 信号与曹-实例
//    QPushButton *button5 = new QPushButton("点击吃饭窗口", this);
//    this->resize(300,400);
//    this->tea = new Teacher(this);
//    this->stu = new Student(this);

//    void(Teacher::*teachersignal)(QString) = &Teacher::hunguty;
//    void(Student::*studentslot)(QString) = &Student::treat;
// //    ClossOver(); // 触发下课的信号
// //    connect(tea, &Teacher::hunguty,stu,&Student::treat);
// //    connect(button5, &QPushButton::clicked,tea,&Teacher::hunguty);
//    connect(tea, teachersignal,stu,studentslot);
//    ClossOver();

// //    lambda
//    int m=10;
//    auto fun = [m](int a, int b){
//        qDebug()<< "lambda run...";
//        return a+b;
//    };
//    int sum=fun(10,20);
//    qDebug() << sum << m; // m=10;
        QPushButton *button6 = new QPushButton("窗口6",this);
        this->resize(100,300);
        connect(button6,&QPushButton::clicked,this,[=](){
            qDebug()<<"按钮按钮。。。";
        });


}

void Widget::ClossOver(){
//    emit tea->hunguty();
    emit tea->hunguty("红烧肉");

}

Widget::~Widget()
{
}

