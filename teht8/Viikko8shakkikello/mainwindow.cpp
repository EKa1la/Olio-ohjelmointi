#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(timeout()));
}

void MainWindow::on_button120_clicked()
{
    gameTime = 120;
    player1Time = 120;
    player2Time = 120;

    updateBars();
}

void MainWindow::on_button300_clicked()
{
    gameTime = 300;
    player1Time = 300;
    player2Time = 300;

    updateBars();
}

void MainWindow::on_startButton_clicked()
{
    currentPlayer = 1;
    timer->start(1000);
}

void MainWindow::on_stopButton_clicked()
{
    timer->stop();
}

void MainWindow::on_p1Button_clicked()
{
    if(currentPlayer == 1)
    {
        currentPlayer = 2;
    }
}

void MainWindow::on_p2Button_clicked()
{
    if(currentPlayer == 2)
    {
        currentPlayer = 1;
    }
}

void MainWindow::timeout()
{
    if(currentPlayer == 1)
    {
        player1Time--;
    }
    else
    {
        player2Time--;
    }

    updateBars();

    if(player1Time == 0)
    {
        timer->stop();
        ui->label->setText("Player 2 won");
    }

    if(player2Time == 0)
    {
        timer->stop();
        ui->label->setText("Player 1 won");
    }
}

void MainWindow::updateBars()
{
    ui->progressBar1->setValue(
        (player1Time * 100) / gameTime);

    ui->progressBar2->setValue(
        (player2Time * 100) / gameTime);
}
MainWindow::~MainWindow()
{
    delete ui;
}
