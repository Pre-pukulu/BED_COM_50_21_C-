#include "Area.h"
#include <cmath>

// defining function for calulating area of square
double Area::calculateSquareArea(Square sArea)
{
    double squareside = sArea.getSideLength();
    return squareside * squareside;
}

// defining function for calulating area of triangle
double Area::calculateTriangleArea(Triangle t_Area)
{
    double Triangle_base = t_Area.getbase();
    double Triangle_height = t_Area.getheight();
    return 0.5 * Triangle_base * Triangle_height;
}
// defining function for calulating area of Circle
double Area::calculateCircleArea(Circle c_Area)
{
    double circle_radius = c_Area.getRadius();
    return M_PI * circle_radius * circle_radius;
}