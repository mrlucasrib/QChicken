#ifndef FINANCEIMPL_H
#define FINANCEIMPL_H
#include "finance.h"
#include <string>

using namespace std;

class FinanceImpl : public Finance
{
    static int totalFinances;
    string token;
    double valuePerUnit;
    int type, totalNumber, Id, dateMonth; //0: Entrada 1: Saida

public:
    FinanceImpl();
    FinanceImpl(const string&, const double&, const int&, const int&, const int&, const int&);
    ~FinanceImpl();
    // gets
    string getToken() const;
    int getDateMonth() const;
    double getValue() const;
    int getType() const;
    int getTotalNumber() const;
    int getId() const;
    // sets
    void setToken(const string&);
    void setDateMonth(const int&);
    void setValue(const double&);
    void setType(const int&);
    void setTotalNumber(const int&);
    void setId(const int&);
    //
    double calculate();
    int getTotalFinances() const;
    void totalFinancesAdd();
    Finance* createFinance();

};

#endif // FINANCEIMPL_H
