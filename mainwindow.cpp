#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //double k = ui->lineEdit->text().toDouble();
    //ui->label->setText(QString::number(k));
    QString input = ui->lineEdit->text();
    double integer_value =ui->lineEdit->text().toDouble();
    //ui->lineEdit->setText(integer_value);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
   double a = ui->lineEdit->text().toDouble();
   double b = (a +5);
   ui->label->setText(QString::number(b));

}


