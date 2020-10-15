#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include "Authentication_global.h"
#include<string>
class AUTHENTICATION_EXPORT Authentication
{
public:
    Authentication();
    bool autenticate(std::string email, std::string password);
    
    
};

#endif // AUTHENTICATION_H
