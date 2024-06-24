#include "formwelcom.h"
#include "ui_formwelcom.h"

FormWelcom::FormWelcom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormWelcom)
{
    ui->setupUi(this);
}

FormWelcom::~FormWelcom()
{
    delete ui;
}
