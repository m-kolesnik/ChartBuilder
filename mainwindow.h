#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

#include <QMainWindow>
#include <QStringList>
#include <QtCharts>
#include <QtCharts/QChart>
#include <QtCharts/QLineSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QStackedBarSeries>

#include "rapidcsv.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void loadData();
    void drawChart();

private slots:
    void on_comboBoxCity_currentIndexChanged(int index);
    void on_comboBoxPeriod_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QChartView *chartView;
};
#endif // MAINWINDOW_H
