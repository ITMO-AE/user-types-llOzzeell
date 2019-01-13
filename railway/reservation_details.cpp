#include "reservation_details.h"


reservation_details::reservation_details()
{
    std::cout <<train_number <<std::endl <<train_name <<std::endl <<boarding_points <<std::endl <<destination <<std::endl;
    std::cout <<class_1 << std::endl <<class_1_fare << std::endl <<class_2 << std::endl <<class_2_fare << std::endl;
    std::cout <<date_day <<"." <<date_month <<"." <<date_year <<std::endl;
}

void reservation_details::getDetails()
{
    std::cout<<"Enter the details as follows" << std::endl;
    std::cout<<"Train No:";
    std::cin >> train_number;
    std::cout<<"Train name:";
    std::cin >> train_name;
    std::cout<<"Boarding point:";
    std::cin >> boarding_points;
    std::cout<<"Destination pt:";
    std::cin >> destination;
    std::cout<<"No of seats in first class & fare per ticket:";
    std::cin>>class_1>>class_1_fare;
    std::cout<<"No of seats in second class & fare per ticket:";
    std::cin>>class_2>>class_2_fare;
    std::cout<<"Date of travel:";
    std::cin>>date_day>>date_month>>date_year;
}
