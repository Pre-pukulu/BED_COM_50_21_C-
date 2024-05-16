#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rec;
    float length;
    float width;
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    rec.setVAriables(length, width);

    float area = rec.CalculateArea(length, width);

    cout << "Area of rectangle is: " << area <<endl;
    return 0;
}