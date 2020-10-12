#ifndef CONTABILIDADE_H
#define CONTABILIDADE_H
#include <string>
#include "finance.h"
#include "Contabilidade_global.h"

using namespace std;

class CONTABILIDADE_EXPORT Contabilidade
{

public:
    virtual bool addFinance(Finance&) = 0;
    virtual bool removeFinance(Finance&) = 0;

    virtual double getTotalValuePerToken(const string&) = 0;
    virtual double* getTokenValuePerMonth(const string&) = 0;
    virtual double* getBalancePerMonth() = 0;

    virtual Contabilidade* createContabilidade() = 0;
};

#endif // CONTABILIDADE_H
