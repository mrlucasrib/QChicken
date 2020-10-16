#include "userimpl.h"

UserImpl::UserImpl()
{

}
UserImpl::~UserImpl()
{

}
UserImpl::UserImpl(const string& userName, const string& userRole, const int& userId)
{
    this-> userName = userName;
    this-> userRole = userRole;
    this-> userId = userId;
}
string UserImpl::getUserName() const{
    return this->userName;
}
string UserImpl::getUserRole() const{
    return this->userRole;
}
int UserImpl::getUserId() const{
    return this->userId;
}

// sets

void  UserImpl::setUserName(const string& userName){
    this->userName = userName;

}
void  UserImpl::setUserId(const int& userId){
    this->userId = userId;
}
void  UserImpl::setUserRole(const string& userRole){
    this->userRole = userRole;
}

User* User::createUser(){
    return new UserImpl();
}
User* UserImpl::createUser(){
    return new UserImpl();
}


