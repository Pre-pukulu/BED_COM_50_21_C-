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

    //check the number of days until expiration and display appropriate message
    if (daysUntilExpiration > 5 && daysUntilExpiration <= 10)
        {
            cout << "Your subscription will expire soon. Renew now!" << endl;
        }
    
    else 

        if (daysUntilExpiration > 1 && daysUntilExpiration <= 5)
           {
             cout << "Your subscription expires in " << daysUntilExpiration << " days" <<endl << "Renew now and save 10%!" << endl;
           }
        else 

            if (daysUntilExpiration == 1)
                {
                    cout << "Your subscription expires within a day!" << endl << "Renew now and save 20%!" << endl;
                }
            else 

                if (daysUntilExpiration == 0)
                    {
                         cout << "Your subscription has expired." << endl;
                    }
                else
                    cout << "You have an active subscription." << endl;
                
    return 0;
}
