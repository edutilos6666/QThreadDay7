#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QVector>
#include <QThread>
#include <QDebug>

class Worker: public QObject
{
    Q_OBJECT

public:
    Worker(int max);

signals:
    void valueChanged(int);

public slots:
    void sort();
    void stop();
    void start();
public:
    int max ;
    int currentValue;
    bool stopFlag ;
};

#endif // WORKER_H
