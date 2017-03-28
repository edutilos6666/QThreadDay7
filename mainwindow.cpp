#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    registerEvents();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::registerEvents()
{
    QObject::connect(ui->actionSort, SIGNAL(triggered(bool)), this, SLOT(createDialogSort()));
}

void MainWindow::createDialogSort()
{
     DialogSort *dialog = new DialogSort();
     dialog->show();
}
