#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QComboBox>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    void setupUi();

    QWidget *centralWidget;

    QPushButton *saveBtn;
    QPushButton *delAllBtn;

    QTextEdit *txtEd;
    QHBoxLayout *btnRowLt;
    QVBoxLayout *mainLayout;

    QComboBox *mainCbx;


};
#endif // MAINWINDOW_H
