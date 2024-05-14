    #include <iostream>
#include <cmath>
#include <limits>

using namespace std;

double calculate_area_of_triangle(double base, double height);
double calculate_area_of_Rectangle(double length, double width);
double calculate_area_of_Square(double side);
double getValidatedInput(const string &prompt);

int main()
{
    while (true)
    {
        cout << "Please select the area of the shape to calculate:\n";
        cout << "1. Square \n";
        cout << "2. Rectangle \n";
        cout << "3. Triangle \n";
        cout << "4. Quit Program\n\n";
        cout << "Enter selection: ";

        int choice;

        while (true)
        {
            cin >> choice;
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please try again.\n";
            }
            else{
                break;
            }
        }
            switch (choice)
        {
        case 1:
            double side;
            side = getValidatedInput("Enter side of Square: ");
            cout << "area of Square is " << calculate_area_of_Square(side) << '\n';
            break;
        case 2:
            double length;
            double width;

            length = getValidatedInput("Enter length of Rectangle: ");
            width = getValidatedInput("Enter widith of Rectangle: ");
            cout << "area of Rectangle is " << calculate_area_of_Rectangle(length, width) << '\n';

            
            break;

        case 3:
            double base;
            double height;

            base = getValidatedInput("Enter base of triangle: ");
            height = getValidatedInput("Enter height of triangle: ");
            
            cout << "Area of triangle is " << calculate_area_of_triangle(base, height) << '\n';

            
            break;

        case 4:
            cout << "Quitting the program.\n";
            return 0;

        default:
            cout << "Your input was: " << choice << " which is an invalid input \n";
        }
    }

    return 0;
}

double calculate_area_of_triangle(double base, double height)
{

    return 0.5 * base * height;
}

double calculate_area_of_Rectangle(double length, double width)
{

    return length * width;
}

double calculate_area_of_Square(double side)
{

    return pow(side, 2);
}
// function help to get number to avoid getting
double getValidatedInput(const string &prompt)
{
    double value;
    while (true)
    {
        cout << prompt << endl;
        cin >> value;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << std::endl;
        }
        else
        {
            break;
        }
    }
    return value;
}
