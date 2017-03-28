#ifndef DIALOGSORT_H
#define DIALOGSORT_H

#include <QMainWindow>
#include <QThread>
#include "worker.h"
#include <QDebug>
#include <QMutexLocker>
#include <QMutex>
namespace Ui {
class DialogSort;
}

class DialogSort : public QMainWindow
{
    Q_OBJECT

public:
    explicit DialogSort(QWidget *parent = 0);
    ~DialogSort();
    void registerEvents();

public slots:
   void updateWindow(int newValue);
private:
    Ui::DialogSort *ui;
    volatile bool stopCalled ;
    QMutex *mutex ;
};

#endif // DIALOGSORT_H
