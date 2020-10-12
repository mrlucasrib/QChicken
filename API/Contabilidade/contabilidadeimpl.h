#ifndef CONTABILIDADEIMPL_H
#define CONTABILIDADEIMPL_H
#include <string>
#include <map>
#include "finance.h"
#include "contabilidade.h"

using namespace std;

typedef map<int, Finance*>::const_iterator FinanceIterator;


class ContabilidadeImpl : public Contabilidade
{

private:
     map<int, Finance*> FinanceList;
public:
    ContabilidadeImpl();
    ~ContabilidadeImpl();
    Contabilidade* createContabilidade();

    bool addFinance(Finance&);
    bool removeFinance(Finance&);

    double getTotalValuePerToken(const string&);
    double* getTokenValuePerMonth(const string&);
    double* getBalancePerMonth();

    FinanceIterator beginFinanceList() const;
    FinanceIterator endFinanceList() const;
};
#endif // CONTABILIDADEIMPL_H
