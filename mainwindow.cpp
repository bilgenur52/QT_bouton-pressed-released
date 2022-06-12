#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QGridLayout *layout = new QGridLayout;
    B0 = new QPushButton("bjr bilge",this);
    B0->setGeometry(0,50,100,100);

        connect(B0, SIGNAL(pressed()),this, SLOT(boutonpress()) );
        connect(B0, SIGNAL(released()),this, SLOT(boutonrelease()) );

        //layout->addWidget(B0,2,3);
         B0->setStyleSheet("background-color:lightsalmon; color: black;");
}

void MainWindow::boutonpress()
{
    qDebug() << "pressed !";
}
void MainWindow::boutonrelease()
{
    qDebug() << "released !";
}
MainWindow::~MainWindow()
{
    delete ui;
}

