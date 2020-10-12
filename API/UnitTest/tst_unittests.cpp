#include <QtTest>
#include "contabilidade.h"
// add necessary includes here

class unitTests : public QObject
{
    Q_OBJECT

public:
    unitTests();
    ~unitTests();

private slots:
    void test_case1();

};

unitTests::unitTests()
{

}

unitTests::~unitTests()
{

}

void unitTests::test_case1()
{

}

QTEST_APPLESS_MAIN(unitTests)

#include "tst_unittests.moc"
