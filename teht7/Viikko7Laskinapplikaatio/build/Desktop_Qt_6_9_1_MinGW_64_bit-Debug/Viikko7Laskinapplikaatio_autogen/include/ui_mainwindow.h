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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *num2;
    QPushButton *N7;
    QPushButton *N0;
    QPushButton *N1;
    QPushButton *N4;
    QLabel *label;
    QLabel *label_2;
    QPushButton *clear;
    QPushButton *N8;
    QPushButton *N5;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N6;
    QPushButton *N9;
    QPushButton *enter;
    QPushButton *resetButton;
    QPushButton *countButton;
    QLineEdit *lineEdit;
    QPushButton *div;
    QPushButton *mul;
    QPushButton *sub;
    QPushButton *add;
    QLabel *num1;
    QLineEdit *result;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1330, 703);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        num2 = new QLabel(centralwidget);
        num2->setObjectName("num2");

        gridLayout->addWidget(num2, 6, 3, 1, 1);

        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");

        gridLayout->addWidget(N7, 2, 0, 1, 1);

        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");

        gridLayout->addWidget(N0, 3, 0, 1, 1);

        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");

        gridLayout->addWidget(N1, 0, 0, 1, 1);

        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");

        gridLayout->addWidget(N4, 1, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(80, 502));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");

        gridLayout->addWidget(clear, 3, 1, 1, 1);

        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");

        gridLayout->addWidget(N8, 2, 1, 1, 1);

        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");

        gridLayout->addWidget(N5, 1, 1, 1, 1);

        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");

        gridLayout->addWidget(N2, 0, 1, 1, 1);

        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");

        gridLayout->addWidget(N3, 0, 3, 1, 1);

        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");

        gridLayout->addWidget(N6, 1, 3, 1, 1);

        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");

        gridLayout->addWidget(N9, 2, 3, 1, 1);

        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");

        gridLayout->addWidget(enter, 3, 3, 1, 1);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");

        gridLayout->addWidget(resetButton, 0, 9, 1, 1);

        countButton = new QPushButton(centralwidget);
        countButton->setObjectName("countButton");

        gridLayout->addWidget(countButton, 1, 9, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 9, 1, 1);

        div = new QPushButton(centralwidget);
        div->setObjectName("div");

        gridLayout->addWidget(div, 3, 4, 1, 1);

        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");

        gridLayout->addWidget(mul, 2, 4, 1, 1);

        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");

        gridLayout->addWidget(sub, 1, 4, 1, 1);

        add = new QPushButton(centralwidget);
        add->setObjectName("add");

        gridLayout->addWidget(add, 0, 4, 1, 1);

        num1 = new QLabel(centralwidget);
        num1->setObjectName("num1");

        gridLayout->addWidget(num1, 6, 0, 1, 1);

        result = new QLineEdit(centralwidget);
        result->setObjectName("result");

        gridLayout->addWidget(result, 6, 5, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 5, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        countButton->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
