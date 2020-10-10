#include "contabilidade.h"

Contabilidade::Contabilidade()
{
}

bool Contabilidade::makeReport()
{
    return true;
}


//
double Contabilidade::getCost(const string&){

}
double Contabilidade::getProfit(const string&){

}

//
bool Contabilidade::addCost(const string& name, const double& value){
    if (CostList.find(name) == CostList.end()) {
        CostList.insert(pair <string, double> (name, value));
        return true;
    }
    return false;
}
bool Contabilidade::addProfit(const string& name, const double& value){
    if (ProfitList.find(name) == ProfitList.end()) {
        ProfitList.insert(pair <string, double> (name, value));
        return true;
    }
    return false;
}


CostIterator Contabilidade::beginCostList() const {
    return CostList.begin();
}

CostIterator Contabilidade::endCostList() const {
    return CostList.end();
}


ProfitIterator Contabilidade::beginProfitList() const {
    return ProfitList.begin();
}

ProfitIterator Contabilidade::endProfitList() const {
    return ProfitList.end();
}
//
