/********************************************************************************
** Form generated from reading UI file 'formwelcom.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWELCOM_H
#define UI_FORMWELCOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormWelcom
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_6;

    void setupUi(QWidget *FormWelcom)
    {
        if (FormWelcom->objectName().isEmpty())
            FormWelcom->setObjectName(QString::fromUtf8("FormWelcom"));
        FormWelcom->resize(486, 465);
        pushButton_4 = new QPushButton(FormWelcom);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 50, 93, 28));
        pushButton_5 = new QPushButton(FormWelcom);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 150, 93, 28));
        textEdit_2 = new QTextEdit(FormWelcom);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(210, 60, 104, 87));
        pushButton_6 = new QPushButton(FormWelcom);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 100, 93, 28));

        retranslateUi(FormWelcom);

        QMetaObject::connectSlotsByName(FormWelcom);
    } // setupUi

    void retranslateUi(QWidget *FormWelcom)
    {
        FormWelcom->setWindowTitle(QCoreApplication::translate("FormWelcom", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("FormWelcom", "project", nullptr));
        pushButton_5->setText(QCoreApplication::translate("FormWelcom", "\346\225\231\347\250\213", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("FormWelcom", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\254\242\350\277\216\347\225\214\351\235\242</p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("FormWelcom", "\345\256\236\344\276\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormWelcom: public Ui_FormWelcom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWELCOM_H
