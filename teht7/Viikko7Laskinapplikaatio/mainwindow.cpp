#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    counter = 0;
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_countButton_clicked()
{
    counter++;
    ui->lineEdit->setText(QString::number(counter));
}


void MainWindow::on_resetButton_clicked()
{
    counter = 0;
    ui->lineEdit->setText("0");
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = (QPushButton*)sender();
    QString num = button->text();

    if(state == 1)
    {
        number1 += num;
        ui->num1->setText(number1);
    }
    else
    {
        number2 += num;
        ui->num2->setText(number2);
    }
}
void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = (QPushButton*)sender();

    if(button->text() == "+") operand = 0;
    if(button->text() == "-") operand = 1;
    if(button->text() == "*") operand = 2;
    if(button->text() == "/") operand = 3;

    state = 2;
}
void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = (QPushButton*)sender();

    if(button->text() == "clear")
    {
        resetLineEdits();
    }

    if(button->text() == "enter")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();

        if(operand == 0) result = n1 + n2;
        if(operand == 1) result = n1 - n2;
        if(operand == 2) result = n1 * n2;
        if(operand == 3) result = n1 / n2;

        ui->result->setText(QString::number(result));
    }
}
void MainWindow::resetLineEdits()
{
    state = 1;
    number1 = "";
    number2 = "";

    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}
