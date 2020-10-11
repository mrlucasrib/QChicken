#ifndef CONTABILIDADE_H
#define CONTABILIDADE_H
#include <string>
#include <map>
#include "finance.h"
#include "Contabilidade_global.h"

using namespace std;

typedef map<int, Finance*>::const_iterator FinanceIterator;


class CONTABILIDADE_EXPORT Contabilidade
{

private:
     map<int, Finance*> FinanceList;
//      double ChickenFoodCosts;
//      double ChickenSalesProfit;
//      double EggsSalesProfit;

public:
    Contabilidade();

    bool makeReport();
    ~Contabilidade();

    bool addFinance(Finance&);
    bool removeFinance(Finance&);

    double getTotalValuePerToken(const string&);
    double* getTokenValuePerMonth(const string&);
    double* getBalancePerMonth();

    FinanceIterator beginFinanceList() const;
    FinanceIterator endFinanceList() const;
//    double getChickenFoodCosts()const;
//    double getChickenSalesProfit()const;
//    double getEggsSalesProfit()const;

//    void setChickenFoodCosts(const double&) ;
//    void setChickenSalesProfit(const double&) ;
//    void setEggsSalesProfit(const double&);

    //
};

#endif // CONTABILIDADE_H
