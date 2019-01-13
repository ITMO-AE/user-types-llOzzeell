#include "autorization.h"

autorization::autorization()
{

}

void autorization::setID()
{
    std::cout << "Enter your id: ";
    std::cin >> id;
    std::cout << "Enter your password: ";
    std::cin >> password;

}

void autorization::outID()
{
    std::cout << "Your id: " << id << std::endl;
    std::cout << "Your password: " << password << std::endl;
}
