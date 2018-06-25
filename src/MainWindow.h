#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

/**
 * @class MainWindow
 * @brief The main window of the black book application.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructs a new instance of the MainWindow class.
     * @param parent - The parent to this widget.
     */
    explicit MainWindow(QWidget* parent = nullptr);

    /**
     * @brief Deletes this instance of MainWindow.
     */
    virtual ~MainWindow();

public slots:
    /**
     * @brief Switches to the day view when a date is selected on the calendar widget.
     * @param date - The date that was selected.
     */
    void switchToDayView(const QDate& date);

    /**
     * @brief Switches to the month view when a date is selected on the calendar widget.
     */
    void switchToMonthView();

private:
    /**
     * @brief The front end of MainWindow.
     */
    Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H
