#include "mybutton.h"
#include <QPushButton>
#include<QtDebug>

MyButton::MyButton(QWidget *parent) : QPushButton(parent)
{
qDebug()<< "1---QPushButton";
}

MyButton::~MyButton() {
    qDebug()<< "2---MyButton";

}
