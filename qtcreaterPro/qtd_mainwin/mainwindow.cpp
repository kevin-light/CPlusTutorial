#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(500,300);
//    QMenuBar *menuber = menuBar();
        QMenuBar *menuber = new QMenuBar(this);  // 创建菜单栏

    this->setMenuBar(menuber);

    // 创建菜单
    QMenu *menu1 = new QMenu("文件");
    QMenu *menu2 = new QMenu("编辑");
    QMenu *menu3 = new QMenu("帮助");
    menuber->addMenu(menu1);
    menuber->addMenu(menu2);
    menuber->addMenu(menu3);
    // 创建菜单项
    QAction *act1 = new QAction("打开文件");
    QAction *act2 = new QAction("保存");
    QAction *act3 = new QAction("关闭文件");
    menu1->addAction(act1);
    menu1->addAction(act2);
    menu1->addAction(act3);

    // 点击关闭信号
    connect(act3, &QAction::triggered,this,&QMainWindow::close);

    // 工具栏
    QToolBar *toolbar = new QToolBar(this);
//    this->addToolBar(toolbar);
    this->addToolBar(Qt::LeftToolBarArea,toolbar); //放中间
    toolbar->addAction(act1);
    toolbar->addAction(act2);
    toolbar->addAction(act3);
    //指定停靠区域，左右边
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);

//    toolbar->setMovable(false); // 不能拖动设置
//    // 设置工具栏浮动状态
//    toolbar->setFloatable(false);

    // 创建状态栏(在底部)
//    QStatusBar *stat = new QStatusBar();
    QStatusBar *stat = statusBar();
    this->setStatusBar(stat);

}

MainWindow::~MainWindow()
{
}

