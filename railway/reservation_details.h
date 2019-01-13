#ifndef RESERVATION_DETAILS_H
#define RESERVATION_DETAILS_H
#include <string>
#include <iostream>

class reservation_details
{
public:
    reservation_details();
    void getDetails();
    void outDetails();

private:
    int train_number;
    std::string boarding_points;
    std::string  train_name;
    std::string  destination;
    int class_1, class_1_fare;
    int class_2, class_2_fare;
    int date_day,date_month,date_year;
};

#endif // RESERVATION_DETAILS_H
