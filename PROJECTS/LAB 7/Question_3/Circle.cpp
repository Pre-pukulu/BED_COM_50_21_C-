#include "Circle.h"

Shapes::Circle::Circle(){
    radius = 0;
}

Shapes::Circle::Circle(double newRadius){
    radius = newRadius;
}

Shapes::Circle::~Circle(){

}

void Shapes::Circle::setRadius(double rad){
    radius = rad;
}

double Shapes::Circle::getRadius() const{
    return radius;
}