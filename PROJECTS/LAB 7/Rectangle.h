// #pragma once

// class Rectangle
// {
//     //private member variables
//     private:
//     float length;
//     float width;


//     public:
    
//     //default constructor intitilizing variables to 0
//     Rectangle();

//     ~Rectangle();
//     //accesor method for assigning vlues
//     void setVAriables(float newlength, float newWidth);

//     //accesor methods for retriving values of length and withdth
//     float getlength() const;

//     float getwidth() const;

//     //function for calculating  area of rectangle
//     float CalculateArea(float len, float wid);

// };
#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    ~Rectangle();
    void setVAriables(float newlength, float newWidth);
    float getlength() const;
    float getwidth() const;
    float CalculateArea(float len, float wid);
};