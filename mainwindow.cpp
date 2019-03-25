#include "mainwindow.h"
#include "widgetsList/widgets_list.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(500, 400);
    CWidgetsList * p = new CWidgetsList(0, Qt::Vertical, this);
    p->resize(200,100);
    QPushButton *btn = new QPushButton("你好",p);
    QPushButton *btn2 = new QPushButton("你好",p);
    //QPushButton *btn3 = new QPushButton("你好",p);

    p->AddWidget(btn);
    btn2->setMinimumSize(100, 20);
    btn2->setMaximumSize(100, 20);
    p->AddWidget(btn2, 9, Qt::AlignLeft);
    //p->AddWidget(btn3);
    btn2->resize(50, 20);
}

MainWindow::~MainWindow()
{

}
