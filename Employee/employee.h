#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>

enum class Gender:int{
    MALE = 0,
    FEMALE = 1
};

class Employee
{
public:
    Employee(std::string name, std::string lastname, Gender gender, int age, int uid);
    void Promote();
    void Demote();
    void PrintInfo();

private:
    std::string Name;
    std::string LastName;
    Gender _Gender;
    int Age;
    int Uid;
};

#endif // EMPLOYEE_H
