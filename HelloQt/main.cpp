#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QLabel* hello = new QLabel("Hello World");
    hello->show();

    return a.exec();
}
