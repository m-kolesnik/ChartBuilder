#ifndef HELLOWINDOW_H
#define HELLOWINDOW_H

#include <QWidget>
#include <QTimer>
#include <QMainWindow>
#include <vector>
#include <string>

#include "mainwindow.h"

namespace Ui {
class HelloWindow;
}

class HelloWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HelloWindow(QWidget *parent = nullptr);
    ~HelloWindow();

    void setRandomGreeting();
    void setGreetingsData();

public slots:
    void launchMainWindow();

private:
    Ui::HelloWindow *ui;    
    MainWindow *ChartWindow;
    std::vector<std::string> greetings;
};

#endif // HELLOWINDOW_H
