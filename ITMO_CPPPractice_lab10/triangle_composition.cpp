#include "triangle_composition.h"
#include <iostream>

TriangleComposition::TriangleComposition(double x1, double y1, double x2, double y2, double x3, double y3)
    : dot1(x1, y1), dot2(x2, y2), dot3(x3, y3) {}

void TriangleComposition::printSideLengths() const {
    double side1 = dot1.distanceTo(dot2);
    double side2 = dot2.distanceTo(dot3);
    double side3 = dot3.distanceTo(dot1);

    std::cout << "Triange sides:\n";
    std::cout << "Side 1: " << side1 << "\n";
    std::cout << "Side 2: " << side2 << "\n";
    std::cout << "Side 3: " << side3 << "\n";
}

double TriangleComposition::calculatePerimeter() const {
    double side1 = dot1.distanceTo(dot2);
    double side2 = dot2.distanceTo(dot3);
    double side3 = dot3.distanceTo(dot1);

    return side1 + side2 + side3;
}

double TriangleComposition::calculateArea() const {
    double side1 = dot1.distanceTo(dot2);
    double side2 = dot2.distanceTo(dot3);
    double side3 = dot3.distanceTo(dot1);

    double p = (side1 + side2 + side3) / 2;
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}