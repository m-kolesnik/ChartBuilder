#include "hellowindow.h"
#include "ui_hellowindow.h"

HelloWindow::HelloWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelloWindow)
{
    ui->setupUi(this);

    this->setGreetingsData();
    this->setRandomGreeting();

    QTimer::singleShot(5000, this, SLOT(launchMainWindow()));
}

HelloWindow::~HelloWindow()
{
    delete ui;
}

void HelloWindow::setRandomGreeting()
{
    qsrand(time(nullptr));
    size_t random = qrand() % this->greetings.size();
    this->ui->label->setText(QString::fromStdString(this->greetings[random]));
}

void HelloWindow::setGreetingsData()
{
    this->greetings.emplace_back("Согласно опросам, до трети\nнаселения США и Европы\nпридерживаются мнения,\nчто серьёзность глобального\nпотепления сильно преувеличена.");
    this->greetings.emplace_back("Первыми людьми, кто был\nэвакуирован из-за повышения\nуровня Мирового океана\nвызванного глобальным потеплением,\nстали жители острова Тегуа.");
    this->greetings.emplace_back("Глобальное потепление\nможет стать виновником\nвымирания белых медведей\nв течение следующих 20 лет.");
    this->greetings.emplace_back("В результате роста\nсредней температуры\nувеличивается площадь пустынь.");
    this->greetings.emplace_back("В перспективе\nглобальное потепление может\nзапустить необратимый механизм\nвысвобождения углекислого\nгаза из мирового океана.");
    this->greetings.emplace_back("C начала 20 века\nсредняя температура воздуха\nвозросла на целых 0,74 °C.");
    this->greetings.emplace_back("Оранжевые жабы\nстали первыми животными,\nкоторые вымерли из-за\nглобального потепления.");
    this->greetings.emplace_back("Большая часть изменения\nтемпературы вызвана повышением\nконцентрации парниковых газов\nиз-за человеческой деятельности.");
    this->greetings.emplace_back("На животноводство\nприходится 15% мировых\nвыбросов углекислого газа.");
    this->greetings.emplace_back("Подъём уровня\nМирового океана всего\nлишь на один ярд (91,44 см.)\nоставит без дома\nболее 100 миллионов людей.");
}

void HelloWindow::launchMainWindow()
{
    this->ChartWindow = new MainWindow();
    this->ChartWindow->show();
    this->close();
}
