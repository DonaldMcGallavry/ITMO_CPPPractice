#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point {
private:
    double x; 
    double y;

public:
    Point(double x = 0, double y = 0);

    double distanceToOrigin() const;

    bool operator<(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif 