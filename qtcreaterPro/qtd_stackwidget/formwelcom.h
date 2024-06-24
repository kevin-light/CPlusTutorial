#ifndef FORMWELCOM_H
#define FORMWELCOM_H

#include <QWidget>

namespace Ui {
class FormWelcom;
}

class FormWelcom : public QWidget
{
    Q_OBJECT

public:
    explicit FormWelcom(QWidget *parent = nullptr);
    ~FormWelcom();

private:
    Ui::FormWelcom *ui;
};

#endif // FORMWELCOM_H
