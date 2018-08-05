#include "MainWindow.h"
#include <QApplication>

/**
 * @brief The main entry point of the program.
 * @param argc - The number of args.
 * @param argv - The args for the program.
 * @return An int representing the error code emitted from the program.
 */
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
