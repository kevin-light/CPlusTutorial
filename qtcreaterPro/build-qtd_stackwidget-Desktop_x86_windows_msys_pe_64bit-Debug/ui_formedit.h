/********************************************************************************
** Form generated from reading UI file 'formedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMEDIT_H
#define UI_FORMEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormEdit
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *FormEdit)
    {
        if (FormEdit->objectName().isEmpty())
            FormEdit->setObjectName(QString::fromUtf8("FormEdit"));
        FormEdit->resize(400, 300);
        pushButton_3 = new QPushButton(FormEdit);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 120, 93, 28));
        pushButton_2 = new QPushButton(FormEdit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 70, 93, 28));
        pushButton = new QPushButton(FormEdit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 93, 28));
        textEdit = new QTextEdit(FormEdit);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(230, 30, 104, 87));

        retranslateUi(FormEdit);

        QMetaObject::connectSlotsByName(FormEdit);
    } // setupUi

    void retranslateUi(QWidget *FormEdit)
    {
        FormEdit->setWindowTitle(QCoreApplication::translate("FormEdit", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormEdit", "\346\213\267\350\264\235", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormEdit", "\351\273\217\350\264\264", nullptr));
        pushButton->setText(QCoreApplication::translate("FormEdit", "\345\244\215\345\210\266", nullptr));
        textEdit->setHtml(QCoreApplication::translate("FormEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\274\226\350\276\221\347\225\214\351\235\242</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormEdit: public Ui_FormEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMEDIT_H
