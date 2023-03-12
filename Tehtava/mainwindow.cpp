#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    i=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Count_clicked()
{

    i++;
    ui->ikkuna->setText(QString::number(i));

}


void MainWindow::on_Reset_clicked()
{
    ui->ikkuna->clear();
    i = 0;
}

