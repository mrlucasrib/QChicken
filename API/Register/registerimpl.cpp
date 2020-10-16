#include "registerimpl.h"

RegisterImpl::RegisterImpl() {}

RegisterImpl::~RegisterImpl() {}

Register* Register::createRegister() {
    return new RegisterImpl();
}

Register* RegisterImpl::createRegister() {
    return new RegisterImpl();
}

bool RegisterImpl::addUser(User* user){
    try{
        user->setUserId(this->getTotalRegister());
        userList.insert(pair <int, user*> (user.getUserId(), &user));
        this->addRegister();
        return true;
    }catch(exception ex){
        return false;
    }
}

bool RegisterImpl::removeUser(const int& userId){
    try{
        if (userList.find(userId) != userList.end()) {
            userList.erase(userId);
            return true;
        }else return false;
    }catch(exception ex){
            return false;
    }
}

User* RegisterImpl::getUser(const int& userId){
    try{
        for(auto it : userList)
            if(it.second->getUserId() == userId)
                return it.second;
        return nullptr;
    }catch(exception ex){
        return nullptr;
    }
}

void RegisterImpl::addRegister(){
    RegisterImpl::totalRegister ++;
}
int RegisterImpl::getTotalRegister() const{
    return RegisterImpl::totalRegister;
}
