#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle;
    Rectangle newRectangle;
    float length;
    float width;

    //getting length from user
    cout << "Enter length of rectangle: ";
    cin >> length;
    //getting width from user
    cout << "Enter width of rectangle: ";
    cin >> width;

    //assign values of width and length using setter metthod
    rectangle.setVAriables(length, width);
    newRectangle = Rectangle(length, width);

    //using area function to calculate area of rectanlge
    float area = rectangle.CalculateArea();

    cout << "area of rectangle after using overloaded constructor is: " << newRectangle.CalculateArea() << endl; 
    cout << "Area of rectangle is: " << area <<endl;
    return 0;
}