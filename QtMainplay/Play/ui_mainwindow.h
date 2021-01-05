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
    QToolButton *toolButton_2;
    QToolButton *toolButton_10;
    QToolButton *toolButton_11;
    QSlider *horizontalSlider;
    QToolButton *toolButton_5;
    QToolButton *toolButton_9;
    QToolButton *toolButton_4;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1615, 964);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/biao.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setIconSize(QSize(30, 30));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(560, 860, 81, 61));
        toolButton->setStyleSheet(QStringLiteral(""));
        toolButton->setIconSize(QSize(55, 55));
        toolButton_7 = new QToolButton(centralWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setGeometry(QRect(1010, 860, 91, 61));
        toolButton_7->setIconSize(QSize(55, 55));
        toolButton_6 = new QToolButton(centralWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(1330, 790, 261, 81));
        toolButton_6->setIconSize(QSize(55, 55));
        toolButton_8 = new QToolButton(centralWidget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setGeometry(QRect(330, 860, 81, 61));
        toolButton_8->setIconSize(QSize(55, 55));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(1330, 70, 261, 721));
        QFont font;
        font.setPointSize(12);
        listWidget->setFont(font);
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget->setStyleSheet(QStringLiteral(""));
        listWidget->setFrameShape(QFrame::StyledPanel);
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(1260, 60, 31, 731));
        verticalSlider->setOrientation(Qt::Vertical);
        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(200, 860, 91, 61));
        toolButton_3->setStyleSheet(QStringLiteral("image:url(:/new/prefix1/3.png)"));
        toolButton_3->setIconSize(QSize(55, 55));
        widget = new QVideoWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 1181, 781));
        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(620, 10, 81, 61));
        toolButton_2->setStyleSheet(QStringLiteral(""));
        toolButton_2->setIconSize(QSize(35, 35));
        toolButton_10 = new QToolButton(centralWidget);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setGeometry(QRect(660, 860, 91, 61));
        toolButton_10->setIconSize(QSize(55, 55));
        toolButton_11 = new QToolButton(centralWidget);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        toolButton_11->setGeometry(QRect(440, 860, 91, 61));
        toolButton_11->setIconSize(QSize(55, 55));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 810, 1121, 31));
        horizontalSlider->setOrientation(Qt::Horizontal);
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(90, 860, 81, 61));
        toolButton_5->setStyleSheet(QStringLiteral("image:url(:/new/prefix1/23.png)"));
        toolButton_5->setIconSize(QSize(55, 55));
        toolButton_9 = new QToolButton(centralWidget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setGeometry(QRect(770, 860, 81, 61));
        toolButton_9->setIconSize(QSize(55, 55));
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(890, 860, 91, 61));
        toolButton_4->setIconSize(QSize(55, 55));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1240, 800, 60, 60));
        label_2->setStyleSheet(QStringLiteral("image:url(:/new/prefix1/9.png)"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 795, 60, 60));
        label_4->setStyleSheet(QStringLiteral("image:url(:/new/prefix1/23.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1300, 34, 301, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        toolButton->raise();
        toolButton_7->raise();
        toolButton_6->raise();
        toolButton_8->raise();
        verticalSlider->raise();
        toolButton_3->raise();
        widget->raise();
        toolButton_10->raise();
        toolButton_11->raise();
        horizontalSlider->raise();
        toolButton_5->raise();
        toolButton_9->raise();
        toolButton_4->raise();
        label_2->raise();
        label_4->raise();
        listWidget->raise();
        label->raise();

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
        toolButton_2->setText(QApplication::translate("MainWindow", "\345\205\250\345\261\217", 0));
        toolButton_10->setText(QApplication::translate("MainWindow", "\345\277\253\350\277\233", 0));
        toolButton_11->setText(QApplication::translate("MainWindow", "\345\277\253\351\200\200", 0));
        toolButton_5->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        toolButton_9->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", 0));
        toolButton_4->setText(QApplication::translate("MainWindow", "\351\235\231\351\237\263", 0));
        label_2->setText(QString());
        label_4->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
