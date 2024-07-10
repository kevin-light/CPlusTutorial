#ifndef OPEWIDGET_H
#define OPEWIDGET_H

#include <QWidget>
#include <QListWidget>
#include "friend.h"
#include <QStackedWidget>
#include "book.h"

class OpeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit OpeWidget(QWidget *parent = nullptr);

    static OpeWidget &getInstance();
    Friend *getFriend();
    book *getBook();

signals:

private:
    QListWidget *m_pListW;
    Friend *m_pFriend;
    book *m_pBook;

    QStackedWidget *m_pSW;

};

#endif // OPEWIDGET_H
