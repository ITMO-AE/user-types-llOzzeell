#include "employee.h"

Employee::Employee(std::string name, std::string lastname, Gender gender, int age, int uid): Name(name), LastName(lastname), _Gender(gender), Age(age), Uid(uid)
{

}

void Employee::Promote()
{
    Uid++;
}

void Employee::Demote()
{
    Uid--;
}

void Employee::PrintInfo(){
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Lastname: " << LastName << std::endl;
    std::cout << "Gender: " << (_Gender == Gender::MALE ? "Male" : "Female")  << std::endl;
    std::cout << "Age: " << Age << std::endl;
    std::cout << "Uid: " << Uid << std::endl;
}
