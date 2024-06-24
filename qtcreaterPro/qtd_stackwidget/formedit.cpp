#include "formedit.h"
#include "ui_formedit.h"

FormEdit::FormEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormEdit)
{
    ui->setupUi(this);
}

FormEdit::~FormEdit()
{
    delete ui;
}
