#ifndef USERIMPL_H
#define USERIMPL_H
#include "user.h"

class UserImpl : public User
{
private:
    string userName, userRole, email, password;
    int userId;

public:
    UserImpl();
    UserImpl(const string&, const string&, const string&, const string&, const int&);
    ~UserImpl();
    //gets
    string getUserName() const;
    string getUserRole() const;
    string getEmail() const;
    string getPassword() const;
    int getUserId() const;
    // sets
    void setUserName(const string&);
    void setUserId(const int&);
    void setUserRole(const string&);
    void setEmail(const string&);
    void setPassword(const string&);

    User* createUser();
    User* createUser(const string&, const string&, const int&);
};

#endif // USERIMPL_H
