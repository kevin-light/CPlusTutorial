#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //    --------- 1 c创建菜单栏  ------------

//    resize(500,300);
////    QMenuBar *menuber = menuBar();
//        QMenuBar *menuber = new QMenuBar(this);  // 创建菜单栏

//    this->setMenuBar(menuber);

//    // 创建菜单
//    QMenu *menu1 = new QMenu("文件");
//    QMenu *menu2 = new QMenu("编辑");
//    QMenu *menu3 = new QMenu("帮助");
//    menuber->addMenu(menu1);
//    menuber->addMenu(menu2);
//    menuber->addMenu(menu3);
//    // 创建菜单项
//    QAction *act1 = new QAction("打开文件");
//    QAction *act2 = new QAction("保存");
//    QAction *act3 = new QAction("关闭文件");
//    menu1->addAction(act1);
//    menu1->addAction(act2);
//    menu1->addAction(act3);

//    // 点击关闭信号
//    connect(act3, &QAction::triggered,this,&QMainWindow::close);

//    // 工具栏
//    QToolBar *toolbar = new QToolBar(this);
////    this->addToolBar(toolbar);
//    this->addToolBar(Qt::LeftToolBarArea,toolbar); //放中间
//    toolbar->addAction(act1);
//    toolbar->addAction(act2);
//    toolbar->addAction(act3);
//    //指定停靠区域，左右边
//    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);

////    toolbar->setMovable(false); // 不能拖动设置
////    // 设置工具栏浮动状态
////    toolbar->setFloatable(false);

//    // 创建状态栏(在底部)
////    QStatusBar *stat = new QStatusBar();
//    QStatusBar *stat = statusBar();
//    this->setStatusBar(stat);
////    stat->showMessage("显示成功", 300); // 增加临时信息
//    // 增加正式信西(状态栏左侧)
//    QLabel *lable1 = new QLabel("打开文件", this);
//    stat->addWidget(lable1);
////    增加永久信息（在状态栏右侧）
//    QLabel *lable2 = new QLabel("ww.lsh.com",this);
//    stat->addPermanentWidget(lable2);

//    // 创建铆接部件
//    QDockWidget *dock = new QDockWidget("铆接部件",this);
////    this->addDockWidget(Qt::TopDockWidgetArea,dock); // 添加浮动窗口
//    this->addDockWidget(Qt::LeftDockWidgetArea,dock); // 添加浮动窗口

//    // 核心部件
//    QTextEdit *edit = new QTextEdit("文本编辑",this);
//    this->setCentralWidget(edit);

//    // 给菜单项增加图片，创建图片控件
//    QPixmap pix;
//    // 选择图片
//    pix.load(":/Image/chatQQ.gif");
//    // 给菜单项设置图片
//    act1->setIcon(QIcon(pix));


//    --------- 2 设置背景图片  ------------
    this->setFixedSize(800,700);
    this->setAutoFillBackground(true);
    QPixmap pix = QPixmap(":/Image/bk.jpg").scaled(this->size());
//    pix.load(":/Image/bk.jpg");
    QPalette palet;
    palet.setBrush(QPalette::Background, QBrush(pix));
    this->setPalette(palet);
}

MainWindow::~MainWindow()
{
}

