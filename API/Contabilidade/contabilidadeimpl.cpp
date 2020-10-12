#include "contabilidadeimpl.h"

ContabilidadeImpl::ContabilidadeImpl()
{
}

ContabilidadeImpl::~ContabilidadeImpl(){

}

Contabilidade* Contabilidade::createContabilidade(){
    return new ContabilidadeImpl();
}

Contabilidade* ContabilidadeImpl::createContabilidade(){
    return new ContabilidadeImpl();
}

bool ContabilidadeImpl::addFinance(Finance& finance) {
    try{
        finance.setId(finance.getTotalFinances());
        FinanceList.insert(pair <int, Finance*> (finance.getId(), &finance));
        finance.totalFinancesAdd();
        return true;
    }catch(exception ex){
        return false;
    }
}

bool ContabilidadeImpl::removeFinance(Finance& finance) {
    try{
        if (FinanceList.find(finance.getId()) != FinanceList.end()) {
            FinanceList.erase(finance.getId());
            return true;
        }else return false;
    }catch(exception ex){
            return false;
    }
}

double ContabilidadeImpl::getTotalValuePerToken(const string& token){
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
double* ContabilidadeImpl::getTokenValuePerMonth(const string& token){
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

double* ContabilidadeImpl::getBalancePerMonth(){
    try{
        double* list = new double[12];
        for (int i=0; i<12; i++) list[i] = 0;
        for (FinanceIterator it = FinanceList.begin(); it != FinanceList.end(); ++it) {
            if (it->second->getType() == 0) {
                list[it->second->getDateMonth() - 1] += it->second->calculate();
            }else list[it->second->getDateMonth()-1] -= it->second->calculate();
        }
        return list;
    }catch(exception ex){
        return nullptr;
    }
}

FinanceIterator ContabilidadeImpl::beginFinanceList() const {
    return FinanceList.begin();
}

FinanceIterator ContabilidadeImpl::endFinanceList() const {
    return FinanceList.end();
}




