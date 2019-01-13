#ifndef AUTORIZATION_H
#define AUTORIZATION_H
#include <string>
#include <iostream>


class autorization
{
public:
    autorization();
    void setID();
    void outID();

private:
    std::string id;
    std::string password;
};

#endif // AUTORIZATION_H
