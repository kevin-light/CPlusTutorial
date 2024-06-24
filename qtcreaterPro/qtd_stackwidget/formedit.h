#ifndef FORMEDIT_H
#define FORMEDIT_H

#include <QWidget>

namespace Ui {
class FormEdit;
}

class FormEdit : public QWidget
{
    Q_OBJECT

public:
    explicit FormEdit(QWidget *parent = nullptr);
    ~FormEdit();

private:
    Ui::FormEdit *ui;
};

#endif // FORMEDIT_H
