#ifndef REGISTERIMPL_H
#define REGISTERIMPL_H
#include "register.h"

#include <map>
using namespace std;
class RegisterImpl : public Register
{
private:
    static int totalRegister;
    map<int, User*> userList;

public:
    RegisterImpl();
    ~RegisterImpl();

    bool addUser(User*);
    bool removeUser(const int&);
    User* getUser(const int&);
    map<int, User*> getUserList();


    Register* createRegister();
    void addRegister();
    int getTotalRegister() const;
};

#endif // REGISTERIMPL_H
