#pragma once

namespace Shapes
{
    class Triangle
    {
    private:
        double base;
        double height;
    public:
        Triangle(); //default constructor
        Triangle(double newbase, double newheight); //overloaded constrctor
        ~Triangle();


        //Accessor methods
        void setvariable(double newbase, double newheight);
        double getbase() const;
        double getheight() const;
    };
    
}