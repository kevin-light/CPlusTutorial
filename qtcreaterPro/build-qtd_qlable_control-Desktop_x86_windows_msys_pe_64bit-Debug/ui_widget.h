/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 321, 61));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 351, 171));
        label_2->setFont(font);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 250, 351, 171));
        label_3->setFont(font);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 310, 91, 41));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 420, 221, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\277\231\346\230\257UI\345\210\233\345\273\272\347\232\204label\346\240\207\347\255\276\357\274\210\350\277\236\346\216\245\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\277\231\346\230\257UI\345\210\233\345\273\272\347\232\204label\346\240\207\347\255\276\357\274\210\345\233\276\347\211\207\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\231\346\230\257UI\345\210\233\345\273\272\347\232\204label\346\240\207\347\255\276\357\274\210\345\212\250\347\224\273\345\233\276\347\211\207\357\274\211", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "ui\345\210\233\345\273\272\347\274\226\350\276\221\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
