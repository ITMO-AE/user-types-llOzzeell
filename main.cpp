#include <iostream>
#include "person.h"

int main()
{

    person p(1988, "Anatolij", "Avdeev");

    p.ChangeName(1998, "Evgenij");

    p.ChangeLastName(1998, "Petrov");

    p.ChangeName(2008, "Polina");

    p.ChangeLastName(2008, "Sergeeva");

    p.ChangeName(2011, "Violetta");

    p.ChangeLastName(2011, "Ferrari");

    for(auto x: {1988, 1998, 2008, 2011})
    {
        p.GetFullName(x);
    }

    std::cout << std::endl;

    for(auto x: {1988, 1998, 2008, 2011})
    {
        p.GetFullNameWithHistory(x);
    }

    return 0;
}
