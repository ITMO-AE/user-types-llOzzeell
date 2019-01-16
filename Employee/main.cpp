#include <iostream>
#include <employee.h>

using namespace std;

int main()
{
    Employee user1("Ivan","Ivanov",Gender::MALE, 34, 1 );
    user1.Promote();
    user1.Promote();
    user1.Demote();
    user1.PrintInfo();
    return 0;
}
