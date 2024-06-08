#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

//defining destructor
Rectangle::~Rectangle() {}

Rectangle::Rectangle(float leng, float wid){
    length = leng;
    width = wid;
}

void Rectangle::setVAriables(float newlength, float newWidth) {
    length = newlength;
    width = newWidth;
}

float Rectangle::getlength() const {
    return length;
}

float Rectangle::getwidth() const {
    return width;
}

float Rectangle::CalculateArea() {
    return length * width;
}