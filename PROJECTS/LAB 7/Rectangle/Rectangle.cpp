// 

#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::~Rectangle() {}

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

float Rectangle::CalculateArea(float len, float wid) {
    return len * wid;
}