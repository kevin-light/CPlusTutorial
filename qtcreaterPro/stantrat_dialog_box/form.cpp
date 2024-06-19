#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SIGNAL(back()));
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{

}
