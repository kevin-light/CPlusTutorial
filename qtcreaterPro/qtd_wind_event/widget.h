#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void closeEvent(QCloseEvent *event);
    void resizeEvent(QResizeEvent *event);
    bool event(QEvent *event);


private:
    Ui::Widget *ui;
    QTextEdit * edit;
};
#endif // WIDGET_H
