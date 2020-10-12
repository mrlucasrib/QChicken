#include "financeimpl.h"

int FinanceImpl::totalFinances = 0;

FinanceImpl::FinanceImpl()
{

}
FinanceImpl::~FinanceImpl()
{

}
FinanceImpl::FinanceImpl(const string& token, const double& valuePerUnit, const int& type, const int& totalNumber, const int& Id, const int& dateMonth){
    this->token = token;
    this->dateMonth = dateMonth;
    this->valuePerUnit = valuePerUnit;
    this->type = type;
    this->totalNumber = totalNumber;
    this->Id = Id;
}

Finance* Finance::createFinance(){
    return new FinanceImpl();
}
Finance* FinanceImpl::createFinance(){
    return new FinanceImpl();
}

double FinanceImpl::calculate(){
    return this->getTotalNumber() * this->getValue();
}

int FinanceImpl::getTotalFinances() const{
    return totalFinances + 1;
}

void FinanceImpl::totalFinancesAdd(){
    totalFinances++;
}


string FinanceImpl::getToken() const{
    return this->token;
}
int FinanceImpl::getDateMonth() const{
    return this->dateMonth;
}
double FinanceImpl::getValue() const{
    return this->valuePerUnit;
}
int FinanceImpl::getType() const{
    return this->type;
}
int FinanceImpl::getTotalNumber() const{
    return this->totalNumber;
}

int FinanceImpl::getId() const{
    return this->Id;
}

void FinanceImpl::setToken(const string& token){
    this->token = token;
}
void FinanceImpl::setDateMonth(const int& dateMonth){
    this->dateMonth = dateMonth;
}
void FinanceImpl::setValue(const double& value){
    this->valuePerUnit = value;
}
void FinanceImpl::setType(const int& type){
    this->type = type;
}

void FinanceImpl::setTotalNumber(const int& totalNumber){
    this->totalNumber = totalNumber;
}
void FinanceImpl::setId(const int& Id){
    this->Id = Id;
}



