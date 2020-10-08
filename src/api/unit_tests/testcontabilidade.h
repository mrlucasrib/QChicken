#ifndef TESTCONTABILIDADE_H
#define TESTCONTABILIDADE_H
#include <QtTest/QtTest>


class TestContabilidade : public QObject
{
    Q_OBJECT
    private slots:
    void createReport();
};


#endif // TESTCONTABILIDADE_H
