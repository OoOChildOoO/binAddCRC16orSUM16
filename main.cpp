#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon(":blue.png"));
    w.setWindowTitle("binAppendCRC16/SUM16(limit4MB)");
    w.show();
    return a.exec();
}
