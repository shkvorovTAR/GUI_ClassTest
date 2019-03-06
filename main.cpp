#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QPalette>
#include <QPixmap>
#include <QtGui>
#include <QBrush>
#include <QGraphicsScene>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
