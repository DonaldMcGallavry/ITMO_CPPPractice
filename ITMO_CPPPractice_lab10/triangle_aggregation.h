#include "dot.h"

class TriangleAggregation {
private:
    const Dot* dot1;
    const Dot* dot2;
    const Dot* dot3;

public:

    TriangleAggregation(const Dot* dot1, const Dot* dot2, const Dot* dot3);

    void printSideLengths() const;
    double calculatePerimeter() const;
    double calculateArea() const;
};