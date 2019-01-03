#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>
#include <string>


class person
{
public:
    person(int Year, std::string Name, std::string Lastname);

    void ChangeName(int year, std::string name);
    void ChangeLastName(int year, std::string lastname);
    void GetFullName(int year) const;
    void GetFullNameWithHistory(int year) const;

private:

    int birthYear;
    void SetBirth(int &year, std::string &name, std::string &lname);

    struct person_state{
        int year;
        std::string name;
        std::string lastname;
        bool ch_name_trig;
        bool ch_lname_trig;
    }birthState, lastState;
    std::vector<person_state> states;
};

#endif // PERSON_H
