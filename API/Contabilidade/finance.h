#ifndef FINANCE_H
#define FINANCE_H
#include <string>
using namespace std;

class Finance
{

public:
    //gets
    virtual string getToken() const = 0;
    virtual int getDateMonth() const = 0;
    virtual double getValue() const = 0;
    virtual int getType() const = 0;
    virtual int getTotalNumber() const = 0;
    virtual int getId() const = 0;
    // sets
    virtual void setToken(const string&) = 0;
    virtual void setDateMonth(const int&) = 0;
    virtual void setValue(const double&) = 0;
    virtual void setType(const int&) = 0;
    virtual void setTotalNumber(const int&) = 0;
    virtual void setId(const int&) = 0;

    virtual double calculate() = 0;
    virtual int getTotalFinances() const = 0;
    virtual void totalFinancesAdd() = 0;
    virtual Finance* createFinance() = 0;
};

#endif // FINANCE_H
