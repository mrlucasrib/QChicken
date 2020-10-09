#include <QtTest>

// add necessary includes here

class tests01 : public QObject
{
    Q_OBJECT

public:
    tests01();
    ~tests01();

private slots:
    void test_case1();

};

tests01::tests01()
{

}

tests01::~tests01()
{

}

void tests01::test_case1()
{

}

QTEST_APPLESS_MAIN(tests01)

#include "tst_tests01.moc"
