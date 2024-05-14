#include <iostream>
#include <ctime> //for time function
#include <cstdlib> //for rand and Srand functions

using namespace std;

int main()
 {
    //set seed to get differnt vanlues each time
    srand(time(0));

    //generating random integer between 0 and 11
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration)
    {
        
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl << "Renew now and save 20%!" << endl;
            break;
            
            //if it will expire within 2-5 days
        case 2:
        case 3:
        case 4:
        case 5:
             cout << "Your subscription expires in " << daysUntilExpiration << " days" <<endl << "Renew now and save 10%!" << endl;
             break;

             //if subscription will expires within 6-10 days
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
             cout << "Your subscription will expire soon. Renew now!" << endl;
             break;
             //if subscription has mor than 10 days to expire
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
 }