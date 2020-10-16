#include "userimpl.h"

UserImpl::UserImpl()
{

}
UserImpl::~UserImpl()
{

}
UserImpl::UserImpl(const string& userName, const string& userRole, const string& email, const string& password, const int& userId)
{
    this-> userName = userName;
    this-> userRole = userRole;
    this-> userId = userId;
    this-> email = email;
    this-> password = password;
}


string UserImpl::getUserName() const{
    return this->userName;
}
string UserImpl::getUserRole() const{
    return this->userRole;
}
string UserImpl::getPassword() const{
    return this->password;
}
string UserImpl::getEmail() const{
    return this->email;
}
int UserImpl::getUserId() const{
    return this->userId;
}

void  UserImpl::setUserName(const string& userName){
    this->userName = userName;

}
void  UserImpl::setUserId(const int& userId){
    this->userId = userId;
}
void  UserImpl::setUserRole(const string& userRole){
    this->userRole = userRole;
}
void  UserImpl::setPassword(const string& password){
    this->password = password;
}
void  UserImpl::setEmail(const string& email){
    this->email = email;
}

User* User::createUser(){
    return new UserImpl();
}
User* UserImpl::createUser(){
    return new UserImpl();
}


