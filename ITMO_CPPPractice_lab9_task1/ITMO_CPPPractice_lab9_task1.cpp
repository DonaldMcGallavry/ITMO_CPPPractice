#include <iostream>
#include <math.h>  
#include <stdexcept> 

using namespace std;

class Triangle {
private:
    double side1, side2, side3;  

    bool isValid() const {
        return (side1 + side2 > side3) &&
            (side1 + side3 > side2) &&
            (side2 + side3 > side1);
    }

public:

    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const {
        if (!isValid()) {
            throw invalid_argument("Incorrect sides of the triangle.");
        }
        double p = (side1 + side2 + side3) / 2;
        return sqrt(p * (p - side1) * (p - side2) * (p - side3)); 
    }

    void printSides() const {
        cout << "Triangle sides: " << side1 << ", " << side2 << ", " << side3 << endl;
    }
};

int main() {
    try {
        Triangle t1(3, 4, 5);
        t1.printSides();
        cout << "Square: " << t1.calculateArea() << endl;

        Triangle t2(1, 2, 5);
        t2.printSides();
        cout << "Square: " << t2.calculateArea() << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}