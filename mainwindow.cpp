#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    drawChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadData()
{

}

void MainWindow::drawChart()
{
    QBarSet *low = new QBarSet("Минимум");
    QBarSet *high = new QBarSet("Максимум");

    *low << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1 << 1;

    *high << -1 << -1 << -1 << -1 << -1 << -1 << -1 << -1 << -1 << -1;

    QStackedBarSeries *series = new QStackedBarSeries();

    series->append(low);
    series->append(high);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Температура в градусах Цельсия");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories = {
           "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"
    };

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("Выберите период");
    chart->addAxis(axisX, Qt::AlignBottom);

    QValueAxis *axisY = new QValueAxis();

    axisY->setRange(-5, 5);
    axisY->setTitleText("Температура [&deg;C]");
    chart->addAxis(axisY, Qt::AlignLeft);

    series->attachAxis(axisX);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    this->chartView = new QChartView(chart);
    this->chartView->setRenderHint(QPainter::Antialiasing);

    this->setCentralWidget(this->chartView);
}

void MainWindow::on_comboBoxCity_currentIndexChanged(int index)
{
    switch (index) {
    case 0: {
        if(this->ui->comboBoxPeriod->currentIndex() == 0){
            QBarSet *low = new QBarSet("Минимум");

            *low << -0.5 << -0.9 << -1.4 << -1.8 << -2.34 << -2.6 << -2.7;

            QStackedBarSeries *series = new QStackedBarSeries();

            series->append(low);

            QChart *chart = new QChart();
            chart->addSeries(series);
            chart->setTitle("Температура в градусах Цельсия");
            chart->setAnimationOptions(QChart::SeriesAnimations);

            QStringList categories = {
                   "Пн", "Вт", "Ср", "Чт", "Пт", "Сб", "Вс"
            };

            QBarCategoryAxis *axisX = new QBarCategoryAxis();
            axisX->append(categories);
            axisX->setTitleText("Неделя");
            chart->addAxis(axisX, Qt::AlignBottom);

            QValueAxis *axisY = new QValueAxis();

            axisY->setRange(-5, 5);
            axisY->setTitleText("Температура [&deg;C]");
            chart->addAxis(axisY, Qt::AlignLeft);

            series->attachAxis(axisX);
            series->attachAxis(axisY);

            chart->legend()->setVisible(true);
            chart->legend()->setAlignment(Qt::AlignBottom);

            this->chartView->setChart(chart);
        }

        if(this->ui->comboBoxPeriod->currentIndex() == 1){
            QBarSet *low = new QBarSet("Минимум");

            *low << 5 << 4.2 << 3.6 << 4.1 << 5 << 4.2 << 3.9 << 3.7 << 3.5 << 3.0 << 2.5 << 2.0 << 2.1 << 2.3 << 1.5 << 1.0 << 0.3 << -0.8 << -0.34 << -1.1 << -1.7 << -1.8 << -1.9 << -2.5 << -2.9 << -2.4 << -2.8 << -3.34 << -3.6 << -2.7;

            QStackedBarSeries *series = new QStackedBarSeries();

            series->append(low);

            QChart *chart = new QChart();
            chart->addSeries(series);
            chart->setTitle("Температура в градусах Цельсия");
            chart->setAnimationOptions(QChart::SeriesAnimations);

            QStringList categories = {
                   "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30",
            };

            QBarCategoryAxis *axisX = new QBarCategoryAxis();
            axisX->append(categories);
            axisX->setTitleText("Месяц");
            chart->addAxis(axisX, Qt::AlignBottom);

            QValueAxis *axisY = new QValueAxis();

            axisY->setRange(-5, 5);
            axisY->setTitleText("Температура [&deg;C]");
            chart->addAxis(axisY, Qt::AlignLeft);

            series->attachAxis(axisX);
            series->attachAxis(axisY);

            chart->legend()->setVisible(true);
            chart->legend()->setAlignment(Qt::AlignBottom);

            this->chartView->setChart(chart);
        }
        break;
    }
    case 1: // Москва
        if(this->ui->comboBoxPeriod->currentIndex() == 0) {
            QBarSet *low = new QBarSet("Минимум");

            *low << -4.5 << -4.75 << -1.1 << -1.1 << -1.15 << -1.76 << -3.2;

            QStackedBarSeries *series = new QStackedBarSeries();

            series->append(low);

            QChart *chart = new QChart();
            chart->addSeries(series);
            chart->setTitle("Температура в градусах Цельсия");
            chart->setAnimationOptions(QChart::SeriesAnimations);

            QStringList categories = {
                   "Пн", "Вт", "Ср", "Чт", "Пт", "Сб", "Вс"
            };

            QBarCategoryAxis *axisX = new QBarCategoryAxis();
            axisX->append(categories);
            axisX->setTitleText("Неделя");
            chart->addAxis(axisX, Qt::AlignBottom);

            QValueAxis *axisY = new QValueAxis();

            axisY->setRange(-5, 5);
            axisY->setTitleText("Температура [&deg;C]");
            chart->addAxis(axisY, Qt::AlignLeft);

            series->attachAxis(axisX);
            series->attachAxis(axisY);

            chart->legend()->setVisible(true);
            chart->legend()->setAlignment(Qt::AlignBottom);

            this->chartView->setChart(chart);
        }

        if(this->ui->comboBoxPeriod->currentIndex() == 1) {
            QBarSet *low = new QBarSet("Минимум");

            *low << 0.9 << 1.3 << 1.4 << 1.8 << 2.34 << 2.6 << 2.7 << 2.5 << 2.1 << 2.4 << 2.8 << 2.3 << 2.0 << 1.7 << 1.5 << 1.9 << 1.0 << 0.8 << 0.5 << 0.0 << -1.1 << -0.5 << -0.9 << -1.4 << -1.8 << -2.34 << -2.6 << -2.7 << -2.5 << -2.9;

            QStackedBarSeries *series = new QStackedBarSeries();

            series->append(low);

            QChart *chart = new QChart();
            chart->addSeries(series);
            chart->setTitle("Температура в градусах Цельсия");
            chart->setAnimationOptions(QChart::SeriesAnimations);

            QStringList categories = {
                   "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30",
            };

            QBarCategoryAxis *axisX = new QBarCategoryAxis();
            axisX->append(categories);
            axisX->setTitleText("Месяц");
            chart->addAxis(axisX, Qt::AlignBottom);

            QValueAxis *axisY = new QValueAxis();

            axisY->setRange(-5, 5);
            axisY->setTitleText("Температура [&deg;C]");
            chart->addAxis(axisY, Qt::AlignLeft);

            series->attachAxis(axisX);
            series->attachAxis(axisY);

            chart->legend()->setVisible(true);
            chart->legend()->setAlignment(Qt::AlignBottom);

            this->chartView->setChart(chart);
        }
        break;
    }
}

void MainWindow::on_comboBoxPeriod_currentIndexChanged(int index)
{
    std::cerr << index;
    this->on_comboBoxCity_currentIndexChanged(this->ui->comboBoxCity->currentIndex());
}

