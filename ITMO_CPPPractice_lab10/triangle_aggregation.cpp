#include "triangle_aggregation.h"
#include <iostream>


TriangleAggregation::TriangleAggregation(const Dot* dot1, const Dot* dot2, const Dot* dot3)
    : dot1(dot1), dot2(dot2), dot3(dot3) {}


void TriangleAggregation::printSideLengths() const {
    double side1 = dot1->distanceTo(*dot2);
    double side2 = dot2->distanceTo(*dot3);
    double side3 = dot3->distanceTo(*dot1);

    std::cout << "Triangle sides:\n";
    std::cout << "Side 1: " << side1 << "\n";
    std::cout << "Side 2: " << side2 << "\n";
    std::cout << "Side 3: " << side3 << "\n";
}

double TriangleAggregation::calculatePerimeter() const {
    double side1 = dot1->distanceTo(*dot2);
    double side2 = dot2->distanceTo(*dot3);
    double side3 = dot3->distanceTo(*dot1);

    return side1 + side2 + side3;
}

double TriangleAggregation::calculateArea() const {
    double side1 = dot1->distanceTo(*dot2);
    double side2 = dot2->distanceTo(*dot3);
    double side3 = dot3->distanceTo(*dot1);

    double p = (side1 + side2 + side3) / 2; 
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}