#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     QPushButton *but_1 = new QPushButton(this);
      ui->verticalLayout->addWidget(but_1);
    ui->radioButton->setText("Yes");
    ui->radioButton_2->setText("No");
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");
    ui->comboBox->addItem("3");
    but_1->setText("Нажмите!");
    but_1->setCheckable(true);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    connect(but_1, SIGNAL(clicked()), this, SLOT(incPBar()));
}

void MainWindow::incPBar()
{
    static int var;
    if(var==10) {
        var = 0;
        ui->progressBar->setValue(var);
    }else{
    var++;
    ui->progressBar->setValue(var);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

