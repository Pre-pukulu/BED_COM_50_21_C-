#pragma once
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

using namespace Shapes;

class Area
{
public:
    static double calculateSquareArea(Square sArea);
    static double calculateTriangleArea(Triangle tArea);
    static double calculateCircleArea(Circle cArea);
};

