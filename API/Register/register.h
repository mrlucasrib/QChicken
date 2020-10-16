#ifndef REGISTER_H
#define REGISTER_H

#include "Register_global.h"
#include "user.h"

class REGISTER_EXPORT Register
{
public:
    virtual bool addUser(User*) = 0;
    virtual bool removeUser(const int&) = 0;
    virtual User* getUser(const int&) = 0;


    virtual Register* createRegister() = 0;
    virtual void addRegister() = 0;
    virtual int getTotalRegister() const = 0;
};

#endif // REGISTER_H
