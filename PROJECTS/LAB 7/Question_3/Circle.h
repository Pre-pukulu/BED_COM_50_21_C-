#pragma once

namespace Shapes
{
    class Circle
    {
    private:
        double radius;
    public:
        Circle(); //default constructor
        Circle(double newRadius);  //overloaded constructor
        ~Circle(); //destructor

        //accessor methods
        void setRadius(double rad);
        double getRadius() const;
    };
    
}