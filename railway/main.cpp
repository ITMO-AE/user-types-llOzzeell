#include <iostream>
#include <autorization.h>
#include "reservation_details.h"
using namespace std;

void mode_admin()
{

}

void mode_user()
{

}

int main()
{
    int mode;

    do
    {
        #ifdef _WIN32
            system("cls");
        #endif
        #ifdef __linux__
            system("clear");
        #endif

        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM.........." << endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        cout << endl;
        cout<<"^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";

        cout << "0 - Exit" << endl;
        cout << "1 - ADMIN mode" << endl;
        cout << "2 - USER mode" << endl;

        cout<<"Enter your choice:";
        cin>>mode;
        cout<<endl;
        switch(mode)
        {
        case 1:
            mode_admin();
            break;
        case 2:
            mode_user();
            break;
        case 0:
            return 0;
        }
    }
    while(mode > 2 || mode < 0);

    return 0;
}
