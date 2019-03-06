/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_pic_1;
    QLabel *label_pic_2;
    QLabel *label_pic_3;
    QLabel *label_pic_4;
    QLabel *label_pic_Sun;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1108, 414);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_pic_1 = new QLabel(centralWidget);
        label_pic_1->setObjectName(QStringLiteral("label_pic_1"));
        label_pic_1->setGeometry(QRect(10, 100, 191, 171));
        label_pic_2 = new QLabel(centralWidget);
        label_pic_2->setObjectName(QStringLiteral("label_pic_2"));
        label_pic_2->setGeometry(QRect(220, 80, 191, 181));
        label_pic_3 = new QLabel(centralWidget);
        label_pic_3->setObjectName(QStringLiteral("label_pic_3"));
        label_pic_3->setGeometry(QRect(660, 80, 211, 181));
        label_pic_4 = new QLabel(centralWidget);
        label_pic_4->setObjectName(QStringLiteral("label_pic_4"));
        label_pic_4->setGeometry(QRect(890, 90, 211, 191));
        label_pic_Sun = new QLabel(centralWidget);
        label_pic_Sun->setObjectName(QStringLiteral("label_pic_Sun"));
        label_pic_Sun->setGeometry(QRect(430, -80, 251, 381));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 330, 1081, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1108, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_pic_1->setText(QApplication::translate("MainWindow", "pix1", Q_NULLPTR));
        label_pic_2->setText(QApplication::translate("MainWindow", "pix2", Q_NULLPTR));
        label_pic_3->setText(QApplication::translate("MainWindow", "pix3", Q_NULLPTR));
        label_pic_4->setText(QApplication::translate("MainWindow", "pix4", Q_NULLPTR));
        label_pic_Sun->setText(QApplication::translate("MainWindow", "pixSun", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
