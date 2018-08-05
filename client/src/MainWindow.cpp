#include "MainWindow.h"
#include "ui_MainWindow.h"

// Constants
namespace
{
    constexpr int MONTH_VIEW_INDEX = 0;
    constexpr int DAY_VIEW_INDEX = 1;
}

/**
 * @brief Constructs a new instance of the MainWindow class.
 * @param parent - The parent to this widget.
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->calendarWidget, SIGNAL(clicked(QDate)), this, SLOT(switchToDayView(QDate)));
    QObject::connect(ui->backButton, SIGNAL(pressed()), this, SLOT(switchToMonthView()));
    switchToMonthView();
}

/**
 * @brief Destroys this instance of MainWindow.
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief Switches to the day view when a date is selected on the calendar widget.
 * @param date - The date that was selected.
 */
void MainWindow::switchToDayView(const QDate& date)
{
    ui->calendarStack->setCurrentIndex(DAY_VIEW_INDEX);
}

/**
 * @brief Switches to the month view when a date is selected on the calendar widget.
 */
void MainWindow::switchToMonthView()
{
    ui->calendarStack->setCurrentIndex(MONTH_VIEW_INDEX);
}
