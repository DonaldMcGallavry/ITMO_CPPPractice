#include <iostream>
#include "triangle_composition.h"
#include "triangle_aggregation.h"

int main() {

    TriangleComposition triangleComp(0, 0, 3, 0, 0, 4);
    std::cout << "Composition triangle:\n";
    triangleComp.printSideLengths();
    std::cout << "Per: " << triangleComp.calculatePerimeter() << "\n";
    std::cout << "Square: " << triangleComp.calculateArea() << "\n\n";

    Dot dot1(0, 0);
    Dot dot2(3, 0);
    Dot dot3(0, 4);
    TriangleAggregation triangleAggr(&dot1, &dot2, &dot3);
    std::cout << "Agregation triangle:\n";
    triangleAggr.printSideLengths();
    std::cout << "Per: " << triangleAggr.calculatePerimeter() << "\n";
    std::cout << "Square: " << triangleAggr.calculateArea() << "\n";

    return 0;
}