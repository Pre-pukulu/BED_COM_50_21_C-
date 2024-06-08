#pragma once

class Rectangle
{
    //private member variables
    private:
    float length;
    float width;


    public:
    
    //default constructor intitilizing variables to 0
    Rectangle();
    Rectangle(float len, float wid);

    ~Rectangle();
    //accesor method for assigning vlues
    void setVAriables(float newlength, float newWidth);

    //accesor methods for retriving values of length and withdth
    float getlength() const;

    float getwidth() const;

    //function for calculating  area of rectangle
    float CalculateArea();

};