#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){

    this->setupUi();
    this->setMinimumSize(800, 600);
    this->resize(1280, 720);

}

MainWindow::~MainWindow(){

}

void MainWindow::setupUi() {

    centralWidget = new QWidget();

    txtEd = new QTextEdit();

    mainCbx = new QComboBox();
    mainCbx->addItem(QString("Lucida Console"));
    mainCbx->addItem(QString("Roboto"));
    mainCbx->addItem(QString("Times New Roman"));

    saveBtn = new QPushButton("Save");
    delAllBtn = new QPushButton("Delete all");

    btnRowLt = new QHBoxLayout();
    btnRowLt->addWidget(mainCbx);
    btnRowLt->addWidget(saveBtn);
    btnRowLt->addWidget(delAllBtn);

    mainLayout = new QVBoxLayout();

    mainLayout->addWidget(txtEd);
    mainLayout->addLayout(btnRowLt);


    centralWidget->setLayout(mainLayout);

    this->setCentralWidget(centralWidget);

}
