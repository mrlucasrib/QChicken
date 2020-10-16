#ifndef USERIMPL_H
#define USERIMPL_H
#include "user.h"

class UserImpl : public User
{
private:
    string userName, userRole;
    int userId;

public:
    UserImpl();
    UserImpl(const string&, const string&, const int&);
    ~UserImpl();
    //gets
    string getUserName() const;
    int getUserId() const;
    string getUserRole() const;
    // sets
    void setUserName(const string&);
    void setUserId(const int&);
    void setUserRole(const string&);

    User* createUser();
    User* createUser(const string&, const string&, const int&);
};

#endif // USERIMPL_H
