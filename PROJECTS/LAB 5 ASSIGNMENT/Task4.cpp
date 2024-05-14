#include <iostream>
#include <limits>

using namespace std;

int main() {
    int Integervalue;
    cout << "Enter an integer value between 5 and 10 \n";

    while (true) {
    
        cin >> Integervalue;

            //check if the last input operation failed ie inputing sring instead of integer
        if (cin.fail()) {

            //clear the error flags of the input stream
            cin.clear();

            //ignores the rest of the input line entered by user
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Sorry, you entered an invalid number, Please try again \n";
       
        } else if (Integervalue < 5 || Integervalue > 10) {
            cout << "You entered " << Integervalue << ". Please enter a number between 5 and 10. \n";
       
        } else {
            break;
        }
    }

    cout << "Your input value(" << Integervalue << ") has been accepted.\n";

    return 0;
}
