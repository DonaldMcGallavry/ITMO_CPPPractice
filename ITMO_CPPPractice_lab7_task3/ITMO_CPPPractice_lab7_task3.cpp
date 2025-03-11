#include <iostream>
#include <math.h>    
#include <tuple>    
#include <iomanip>

using namespace std;

tuple<double, double, bool> solveQuadEq(double a, double b, double c) {
    double root1 = 0, root2 = 0;
    bool hasRealRoots = true; 

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
    } else {
        hasRealRoots = false;
    }
    return make_tuple(root1, root2, hasRealRoots);
}

int main() {
    double a, b, c;
    double root1, root2;
    bool hasRealRoots;

    cout << "Enter the elements of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    tie(root1, root2, hasRealRoots) = solveQuadEq(a, b, c);

    if (hasRealRoots) {
        cout << "Roots are: " << root1 << " and " << root2 << endl;
    } else {
        cout << "No roots.\n";
    }

    return 0;
}