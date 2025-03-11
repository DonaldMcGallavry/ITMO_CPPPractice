#include "point.h"


Point::Point(double x, double y) : x(x), y(y) {}


double Point::distanceToOrigin() const {
    return std::sqrt(x * x + y * y);
}


bool Point::operator<(const Point& other) const {
    return distanceToOrigin() < other.distanceToOrigin();
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}