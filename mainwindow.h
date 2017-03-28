#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogsort.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void registerEvents();

public slots:
    void createDialogSort();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
