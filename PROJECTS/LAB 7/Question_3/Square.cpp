#include "Square.h"

Shapes::Square::Square(){
    sideLength = 0;
}

Shapes::Square::Square(double side){
    sideLength = side;
}

Shapes::Square::~Square(){

};

void Shapes::Square::setSideLength(double side){
    sideLength = side;
}

double Shapes::Square::getSideLength() const{
    return sideLength;
}