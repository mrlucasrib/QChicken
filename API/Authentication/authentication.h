#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include "Authentication_global.h"
#include<string>
class AUTHENTICATION_EXPORT Authentication
{
public:
//    Authentication();
    virtual bool autenticate(std::string email, std::string password) = 0;


    
    
};

#endif // AUTHENTICATION_H
