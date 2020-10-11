#ifndef CONTABILIDADE_H
#define CONTABILIDADE_H
#include <string>
#include <map>
#include "Contabilidade_global.h"

using namespace std;

typedef map<string, double>::const_iterator CostIterator;
typedef map<string, double>::const_iterator ProfitIterator;

class CONTABILIDADE_EXPORT Contabilidade
{

private:
    map<string, double> CostList;
    map<string, double> ProfitList;

public:
    Contabilidade();
    bool makeReport();
    ~Contabilidade();

    //
    double getCost(const string&) const;
    double getProfit(const string&) const;

    //
    bool addCost(const string&, const double&);
    bool addProfit(const string&, const double&);

    //
    CostIterator beginCostList() const;
    CostIterator endCostList() const;
    ProfitIterator beginProfitList() const;
    ProfitIterator endProfitList() const;
    //
};

#endif // CONTABILIDADE_H
