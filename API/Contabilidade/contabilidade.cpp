#include "contabilidade.h"

Contabilidade::Contabilidade()
{
}

bool Contabilidade::makeReport()
{
    return true;
}

bool Contabilidade::addFinance(Finance& finance) {
    try{
        finance.setId(finance.getTotalFinances());
        FinanceList.insert(pair <int, Finance*> (finance.getId(), &finance));
        Finance::totalFinancesAdd();
        return true;
    }catch(exception ex){
        return false;
    }
}

bool Contabilidade::removeFinance(Finance& finance) {
    try{
        if (FinanceList.find(finance.getId()) != FinanceList.end()) {
            FinanceList.erase(finance.getId());
            return true;
        }else return false;
    }catch(exception ex){
            return false;
    }
}

double Contabilidade::getTotalValuePerToken(const string& token){
    try{
        double TotalValue = 0;
        for (FinanceIterator it = FinanceList.begin(); it != FinanceList.end(); ++it) {
            if (it->second->getToken() == token) {
                TotalValue += it->second->calculate();
            }
        }
        return TotalValue;
    }catch(exception ex){
        return -1;
    }
}
double* Contabilidade::getTokenValuePerMonth(const string& token){
    try{
        double* list = new double[12];
        for (int i=0; i<12; i++) list[i] = 0;
        for (FinanceIterator it = FinanceList.begin(); it != FinanceList.end(); ++it) {
            if (it->second->getToken() == token) {
                list[it->second->getDateMonth() - 1] += it->second->calculate();
            }
        }
        return list;
    }catch(exception ex){
        return nullptr;
    }
}

FinanceIterator Contabilidade::beginFinanceList() const {
    return FinanceList.begin();
}

FinanceIterator Contabilidade::endFinanceList() const {
    return FinanceList.end();
}





//double Contabilidade::getChickenFoodCosts() const{
//    return this->ChickenFoodCosts;
//}
//double Contabilidade::getChickenSalesProfit() const{
//    return this->ChickenSalesProfit;
//}
//double Contabilidade::getEggsSalesProfit() const{
//    return this->EggsSalesProfit;
//}

//void Contabilidade::setChickenFoodCosts(const double& Cost){
//    this->ChickenFoodCosts = Cost;
//}
//void Contabilidade::setChickenSalesProfit(const double& Profit){
//    this->ChickenSalesProfit = Profit;
//}
//void Contabilidade::setEggsSalesProfit(const double& Profit){
//    this->EggsSalesProfit = Profit;
//}
