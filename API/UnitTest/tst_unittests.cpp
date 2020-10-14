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
    void test_Contabilidade_addFinance();
    void test_Contabilidade_removeFinance();
    void test_Contabilidade_getTotalValuePerToken();
    void Contabilidade_test_getTokenValuePerMonth();
    void test_Contabilidade_getBalancePerMonth();
    void test_Contabilidade_createContabilidade();

    void test_Finace_getToken();
    void test_Finace_getDateMonth();
    void test_Finace_getValue();
    void test_Finace_getType();
    void test_Finace_getTotalNumber();
    void test_Finace_getId();
    void test_Finace_setToken();
    void test_Finace_setDateMonth();
    void test_Finace_setValue();
    void test_Finace_setType();
    void test_Finace_setTotalNumber();
    void test_Finace_setId();
    void test_Finace_calculate();
    void test_Finace_getTotalFinances();
    void test_Finace_totalFinancesAdd();

};

unitTests::unitTests()
{

}

unitTests::~unitTests()
{

}

void unitTests::test_Contabilidade_addFinance()
{

}

void unitTests::test_Contabilidade_removeFinance()
{

}

void unitTests::test_Contabilidade_getTotalValuePerToken()
{

}

void unitTests::Contabilidade_test_getTokenValuePerMonth()
{

}

void unitTests::test_Contabilidade_getBalancePerMonth()
{

}

void unitTests::test_Contabilidade_createContabilidade()
{

}

void unitTests::test_Finace_getToken()
{

}

void unitTests::test_Finace_getDateMonth()
{

}

void unitTests::test_Finace_getValue()
{

}

void unitTests::test_Finace_getType()
{

}

void unitTests::test_Finace_getTotalNumber()
{

}

void unitTests::test_Finace_getId()
{

}

void unitTests::test_Finace_setToken()
{

}

void unitTests::test_Finace_setDateMonth()
{

}

void unitTests::test_Finace_setValue()
{

}

void unitTests::test_Finace_setType()
{

}

void unitTests::test_Finace_setTotalNumber()
{

}

void unitTests::test_Finace_setId()
{

}

void unitTests::test_Finace_calculate()
{

}

void unitTests::test_Finace_getTotalFinances()
{

}

void unitTests::test_Finace_totalFinancesAdd()
{

}


QTEST_APPLESS_MAIN(unitTests)

#include "tst_unittests.moc"
