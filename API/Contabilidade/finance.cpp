#include "finance.h"

int Finance::totalFinances = 0;

Finance::Finance()
{

}
Finance::Finance(const string& token, const double& valuePerUnit, const int& type, const int& totalNumber, const int& Id, const int& dateMonth){
    this->token = token;
    this->dateMonth = dateMonth;
    this->valuePerUnit = valuePerUnit;
    this->type = type;
    this->totalNumber = totalNumber;
    this->Id = Id;
}


string Finance::getToken() const{
    return this->token;
}
int Finance::getDateMonth() const{
    return this->dateMonth;
}
double Finance::getValue() const{
    return this->valuePerUnit;
}
int Finance::getType() const{
    return this->type;
}
int Finance::getTotalNumber() const{
    return this->totalNumber;
}

int Finance::getId() const{
    return this->Id;
}

void Finance::setToken(const string& token){
    this->token = token;
}
void Finance::setDateMonth(const int& dateMonth){
    this->dateMonth = dateMonth;
}
void Finance::setValue(const double& value){
    this->valuePerUnit = value;
}
void Finance::setType(const int& type){
    this->type = type;
}

void Finance::setTotalNumber(const int& totalNumber){
    this->totalNumber = totalNumber;
}
void Finance::setId(const int& Id){
    this->Id = Id;
}



double Finance::calculate(){
    return this->getTotalNumber() * this->getValue();
}

int Finance::getTotalFinances() const{
    return totalFinances + 1;
}

void Finance::totalFinancesAdd(){
    totalFinances++;
}
