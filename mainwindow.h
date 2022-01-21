#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define FILE_SIZE_MAX (1024 * 1024 * 4 +2)

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    unsigned int fun_getFileSource(char *dst);
    void fun_saveToFile(QString filePath, char * buf, quint64 len);
    quint16 GetCRC16(char *puchMsg,unsigned int usDataLen);
    quint16 GetSUM16(char *puchMsg,unsigned int usDataLen);

private slots:
    void on_pushButton_chooseFile_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::MainWindow *ui;
    QList<QString> mCheckList;
};
#endif // MAINWINDOW_H
