/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *toolButton;
    QToolButton *toolButton_7;
    QToolButton *toolButton_6;
    QToolButton *toolButton_8;
    QListWidget *listWidget;
    QSlider *verticalSlider;
    QToolButton *toolButton_3;
    QVideoWidget *widget;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QSlider *horizontalSlider;
    QToolButton *toolButton_5;
    QToolButton *toolButton_9;
    QLabel *label;
    QToolButton *toolButton_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1597, 943);
        MainWindow->setStyleSheet(QStringLiteral("image:url(:/new/prefix1/73ezl3.jpg)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 890, 91, 41));
        toolButton_7 = new QToolButton(centralWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setGeometry(QRect(470, 890, 91, 41));
        toolButton_6 = new QToolButton(centralWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(1400, 870, 181, 61));
        toolButton_8 = new QToolButton(centralWidget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setGeometry(QRect(1340, 870, 61, 31));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(1340, 40, 241, 831));
        QFont font;
        font.setPointSize(12);
        listWidget->setFont(font);
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget->setFrameShape(QFrame::StyledPanel);
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(1300, 50, 16, 791));
        verticalSlider->setOrientation(Qt::Vertical);
        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(130, 890, 91, 41));
        widget = new QVideoWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 1281, 851));
        toolButton_10 = new QToolButton(centralWidget);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setGeometry(QRect(570, 890, 91, 41));
        toolButton_11 = new QToolButton(centralWidget);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        toolButton_11->setGeometry(QRect(670, 890, 91, 41));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 870, 1281, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(350, 890, 91, 41));
        toolButton_9 = new QToolButton(centralWidget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setGeometry(QRect(1340, 900, 61, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1360, 10, 221, 21));
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(240, 890, 91, 41));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        toolButton->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0));
        toolButton_7->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", 0));
        toolButton_6->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\210\227\350\241\250", 0));
        toolButton_8->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0));
        toolButton_10->setText(QApplication::translate("MainWindow", "\345\277\253\350\277\233", 0));
        toolButton_11->setText(QApplication::translate("MainWindow", "\345\277\253\351\200\200", 0));
        toolButton_5->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        toolButton_9->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", 0));
        label->setText(QString());
        toolButton_4->setText(QApplication::translate("MainWindow", "\351\235\231\351\237\263", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
