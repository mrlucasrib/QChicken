#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User
{

public:
    //gets
    virtual string getUserName() const = 0;
    virtual int getUserId() const = 0;
    virtual string getUserRole() const = 0;
    // sets
    virtual void setUserName(const string&) = 0;
    virtual void setUserId(const int&) = 0;
    virtual void setUserRole(const string&) = 0;

    virtual User* createUser() = 0;
};

#endif // USER_H
