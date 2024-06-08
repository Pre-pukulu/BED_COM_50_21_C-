#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;
using namespace Shapes;

int main() {
   int choice;
   bool quit = false;

   while (!quit) {

        //prompting user to choose the shape to calculate its area if there is no shape that is needed user must quit
       cout << "Select an option:" << endl;
       cout << "1. Calculate the area of a square" << endl;
       cout << "2. Calculate the area of a triangle" << endl;
       cout << "3. Calculate the area of a circle" << endl;
       cout << "4. Quit" << endl;
       cout << "Enter your choice: ";
       cin >> choice;

       switch (choice) {
       case 1: {
        //this is executed when user choose to calculate area of square
           double side;
           cout << "Enter the length of the square: ";
           cin >> side;
           Square Squareobject(side); //creating square object with side length being provided
           double area = Area::calculateSquareArea(Squareobject);
           cout << "The area of the square is: " << area << endl;
           break;
       }
       case 2: {

        //if user choose to calculate area of triangle
           double base, height;
           cout << "Enter the base of the triangle: ";
           cin >> base;
           cout << "Enter the height of the triangle: ";
           cin >> height;
           Triangle Triangle_object(base, height);
           double area = Area::calculateTriangleArea(Triangle_object);
           cout << "The area of the triangle is: " << area << endl;
           break;
       }
       case 3: {

        //if user choose to calculate area of circle
           double radius;
           cout << "Enter the radius of the circle: ";
           cin >> radius;
           Circle Circle_object(radius);
           double area = Area::calculateCircleArea(Circle_object);
           cout << "The area of the circle is: " << area << endl;
           break;
       }
       case 4:
       //user choose to quite the program
           quit = true;
           break;
       default:
           cout << "Invalid choice. Try again." << endl;
       }
   }

   return 0;
}