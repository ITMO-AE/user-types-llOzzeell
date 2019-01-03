#include "person.h"

person::person(int Year, std::string Name, std::string Lastname)
{
    person::SetBirth(Year, Name, Lastname);
}

void person::SetBirth(int &year, std::string &name, std::string &lname)
{
    birthYear = year;
    person_state birth;
    birth.year = year;
    birth.name = name;
    birth.lastname = lname;
    states.push_back(birth);
    birthState = birth;
    lastState = birth;
}

void person::ChangeName(int year, std::string name)
{
    if(year < birthYear) return;

    int i = 0;

    for(auto x : states)
    {
        if(x.year == year)
        {
            if(x.ch_name_trig) return;
            else
            {
                states[static_cast<unsigned long>(i)].name = name;
                states[static_cast<unsigned long>(i)].ch_name_trig = true;
                return;
            }
        }
        i++;
    }

    person_state state;
    state.name = name;
    lastState.name = name;
    state.lastname = lastState.lastname;
    state.year = year;
    state.ch_name_trig = true;
    state.ch_lname_trig = false;
    states.push_back(state);
}

void person::ChangeLastName(int year, std::string lastname)
{
    if(year < birthYear) return;

    int i = 0;

    for(auto x : states)
    {
        if(x.year == year)
        {
            if(x.ch_lname_trig) return;
            else
            {
                states[static_cast<unsigned long>(i)].lastname = lastname;
                states[static_cast<unsigned long>(i)].ch_lname_trig = true;
                return;
            }
        }
        i++;
    }

    person_state state;
    state.name = lastState.name;
    state.lastname = lastname;
    lastState.lastname = lastname;
    state.year = year;
    state.ch_name_trig = false;
    state.ch_lname_trig = true;
    states.push_back(state);
}

void person::GetFullName(int year) const{

    if(year < birthYear)
    {
        std::cout << "No Person" << std::endl;
        return;
    }

    for(auto x: states){
        if(x.year == year)
        {
            std::cout << x.year << " "
                      << x.name << " "
                      << x.lastname
                      << std::endl;
            return;
        }
    }
    std::cout << "Incognito" << std::endl;
}

void person::GetFullNameWithHistory(int year) const{

    if(year < birthYear)
    {
        std::cout << "No Person" << std::endl;
        return;
    }

    for(auto x: states){
        if(x.year == year)
        {
            if(x.name != birthState.name)
            {
                std::cout << x.name << " (" << birthState.name << ") " << " ";
            }
            else std::cout << x.name << " ";

            if(x.lastname != birthState.lastname)
            {
                std::cout << x.lastname << " (" << birthState.lastname << ") " << " ";
            }
            else std::cout << x.lastname << " ";

            std::cout << std::endl;

            return;
        }
    }
    std::cout << "Incognito" << std::endl;
}
