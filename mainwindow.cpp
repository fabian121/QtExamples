#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSayHello_clicked()
{
    string sname = "";
    QString name = ui->txtName->toPlainText();

    ui->txtResult->setPlainText("Hello World " + name + "! -- changed....->last chance!");
}
