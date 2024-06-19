#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QColorDialog>
#include <QPalette>
#include <QFontDialog>
#include <QMessageBox>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    setFixedSize(800,600);
    ui->setupUi(this);
    this->new_window=new Form();
    ui->pushButton->setFixedSize(100,30);
    ui->pushButton_2->setFixedSize(100,30);

//    QString fileName = QFileDialog::getOpenFileName(this, tr("打开文件"),
//                                                    "./",
//                                                    tr("Images (*.png *.xpm *.jpg);;Text (*text)"));
//    if(!fileName.isEmpty())
//        ui->plainTextEdit->appendPlainText(fileName);

    connect(ui->pushButton_7,&QPushButton::clicked,this,[=](){
        this->hide();
        this->new_window->show();
    });

    connect(this->new_window, &Form::back,this,[=](){
        this->new_window->hide();
        this->show();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(
                              this,
                              "Select one or more files to open",
                              "./",
                              "Images (*.png *.xpm *.jpg);;Text file(*text)");

    for(int i=0; i<files.count(); i++){
        qDebug()<<files.at(i);
        ui->plainTextEdit->appendPlainText(files.at(i));
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QPalette pal = ui->plainTextEdit->palette(); // 获取现有的调色板数据
    QColor iniColor = pal.color(QPalette::Text); // 现有文字颜色
    QColor color =  QColorDialog::getColor(iniColor,this,"选择颜色");
    if(color.isValid()){
        pal.setColor(QPalette::Text,color);
        ui->plainTextEdit->setPalette(pal);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    bool ok;
    QFont iniFont = ui->plainTextEdit->font();
    QFont font = QFontDialog::getFont(&ok, iniFont, this);
    if (ok) {
        // font is set to the font the user selected
        ui->plainTextEdit->setFont(font);
    } else {
        // the user canceled the dialog; font is set to the initial
        // value, in this case Times, 12.
    }
}

void MainWindow::on_pushButton_5_clicked()
{
//    QMessageBox::critical(this, "错误弹出窗口","程序debug");
//    QMessageBox::warning(this,"消息警告","程序警告");
//    QMessageBox::information(this,"消息对话框","程序一切正常",QMessageBox::Ok,QMessageBox::NoButton);
    QMessageBox::StandardButton result;
    result = QMessageBox::question(this,"选择消息框","文件已修改，是否保存",QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel,QMessageBox::NoButton);
    if(result==QMessageBox::Yes)
        qDebug()<<"正在保存";
    else if(result==QMessageBox::No)
        qDebug()<<"不保存";
    else
        qDebug()<<"取消操作";

}

void MainWindow::on_pushButton_6_clicked()
{
    bool ok;
      QString text = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                           tr("User name:"), QLineEdit::Normal,
                                           "默认值", &ok);
      if (ok&&!text.isEmpty())
          ui->plainTextEdit->appendPlainText(text);

}

void MainWindow::on_pushButton_7_clicked()
{

}
