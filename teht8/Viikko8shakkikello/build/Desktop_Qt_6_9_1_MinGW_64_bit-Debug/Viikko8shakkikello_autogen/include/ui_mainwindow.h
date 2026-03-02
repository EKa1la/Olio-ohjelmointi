/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *p1Button;
    QPushButton *p2Button;
    QPushButton *button120;
    QPushButton *button300;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(160, 350, 101, 51));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(350, 350, 111, 51));
        p1Button = new QPushButton(centralwidget);
        p1Button->setObjectName("p1Button");
        p1Button->setGeometry(QRect(120, 120, 90, 29));
        p2Button = new QPushButton(centralwidget);
        p2Button->setObjectName("p2Button");
        p2Button->setGeometry(QRect(380, 120, 101, 31));
        button120 = new QPushButton(centralwidget);
        button120->setObjectName("button120");
        button120->setGeometry(QRect(170, 260, 90, 29));
        button300 = new QPushButton(centralwidget);
        button300->setObjectName("button300");
        button300->setGeometry(QRect(350, 260, 90, 29));
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(100, 80, 118, 23));
        progressBar1->setValue(24);
        progressBar2 = new QProgressBar(centralwidget);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setGeometry(QRect(370, 80, 118, 23));
        progressBar2->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 200, 91, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        p1Button->setText(QCoreApplication::translate("MainWindow", "SWITCH P1", nullptr));
        p2Button->setText(QCoreApplication::translate("MainWindow", "SWITCH P2", nullptr));
        button120->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        button300->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Info teksti", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
