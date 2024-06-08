#include "Triangle.h"

Shapes::Triangle::Triangle(){
    base = 0;
    height = 0;
}
Shapes::Triangle::Triangle(double newbase, double newheight){
    base = newbase;
    height = newheight;
}

Shapes::Triangle::~Triangle(){

}

void Shapes::Triangle::setVariable(double newbase, double newheight){
    base = newbase;
    height =newheight;
}

double Shapes::Triangle::getbase() const{
    return base;
}

double Shapes::Triangle::getheight() const{
    return height;
}