// Square.h
#pragma once

namespace Shapes 
{
   class Square {
   private:
       double sideLength;

   public:
       Square(); // Default constructor
       Square(double side); // Overloaded constructor
       ~Square(); // Destructor

       void setSideLength(double side); // setter method
       double getSideLength() const; // getter method
   };
}