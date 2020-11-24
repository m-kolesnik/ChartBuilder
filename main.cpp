#include "hellowindow.h"
#include "mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *loadingWindow = new HelloWindow();

    loadingWindow->setWindowFlag(Qt::FramelessWindowHint);
    loadingWindow->show();

    return a.exec();
}
