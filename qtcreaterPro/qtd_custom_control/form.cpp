#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->spinBox,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(setValue(int)));
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->spinBox,SLOT(setValue(int)));

}

Form::~Form()
{
    delete ui;
}

void Form::on_Form_customContextMenuRequested(const QPoint &pos)
{

}
void Form::setNum(){
    ui->horizontalSlider->setValue(50);
}
