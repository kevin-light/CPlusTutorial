/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClient
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *name_lab;
    QLineEdit *name_le;
    QLabel *pwb_lab;
    QLineEdit *pwd_le;
    QPushButton *login_pb;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *register_pb;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel_pb;

    void setupUi(QWidget *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName(QString::fromUtf8("TcpClient"));
        TcpClient->resize(795, 792);
        widget = new QWidget(TcpClient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 330, 320, 187));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        name_lab = new QLabel(widget);
        name_lab->setObjectName(QString::fromUtf8("name_lab"));
        QFont font;
        font.setPointSize(13);
        name_lab->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, name_lab);

        name_le = new QLineEdit(widget);
        name_le->setObjectName(QString::fromUtf8("name_le"));
        name_le->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, name_le);

        pwb_lab = new QLabel(widget);
        pwb_lab->setObjectName(QString::fromUtf8("pwb_lab"));
        pwb_lab->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, pwb_lab);

        pwd_le = new QLineEdit(widget);
        pwd_le->setObjectName(QString::fromUtf8("pwd_le"));
        pwd_le->setFont(font);
        pwd_le->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, pwd_le);

        login_pb = new QPushButton(widget);
        login_pb->setObjectName(QString::fromUtf8("login_pb"));
        login_pb->setFont(font);

        formLayout->setWidget(2, QFormLayout::SpanningRole, login_pb);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        register_pb = new QPushButton(widget);
        register_pb->setObjectName(QString::fromUtf8("register_pb"));
        QFont font1;
        font1.setPointSize(11);
        register_pb->setFont(font1);

        horizontalLayout->addWidget(register_pb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel_pb = new QPushButton(widget);
        cancel_pb->setObjectName(QString::fromUtf8("cancel_pb"));
        cancel_pb->setFont(font1);

        horizontalLayout->addWidget(cancel_pb);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QWidget *TcpClient)
    {
        TcpClient->setWindowTitle(QCoreApplication::translate("TcpClient", "TcpClient", nullptr));
        name_lab->setText(QCoreApplication::translate("TcpClient", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pwb_lab->setText(QCoreApplication::translate("TcpClient", "\345\257\206\347\240\201\357\274\232", nullptr));
        login_pb->setText(QCoreApplication::translate("TcpClient", "\347\231\273\345\275\225", nullptr));
        register_pb->setText(QCoreApplication::translate("TcpClient", "\346\263\250\345\206\214", nullptr));
        cancel_pb->setText(QCoreApplication::translate("TcpClient", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
