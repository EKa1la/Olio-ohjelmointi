#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void timeout();

    void on_startButton_clicked();
    void on_stopButton_clicked();
    void on_p1Button_clicked();
    void on_p2Button_clicked();
    void on_button120_clicked();
    void on_button300_clicked();

private:
    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;

    QTimer *timer;

    void updateBars();
};

#endif
