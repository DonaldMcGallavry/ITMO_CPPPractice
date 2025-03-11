#include "dot.h"

class TriangleComposition {
private:
    Dot dot1;
    Dot dot2; 
    Dot dot3;

public:

    TriangleComposition(double x1, double y1, double x2, double y2, double x3, double y3);

    void printSideLengths() const;
    double calculatePerimeter() const;
    double calculateArea() const;
};