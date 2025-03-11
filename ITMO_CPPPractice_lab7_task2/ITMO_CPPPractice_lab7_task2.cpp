#include <iostream>
#include <math.h>

using namespace std;

struct QuadEq {
    double root1;  
    double root2;  
};

QuadEq solveQuadEq(double a, double b, double c) 
{
    QuadEq solution;

    double d = b * b - 4 * a * c;

    if (d > 0) {

        solution.root1 = (-b + sqrt(d)) / (2 * a);
        solution.root2 = (-b - sqrt(d)) / (2 * a);
    }
    else if (d == 0) {
        solution.root1 = solution.root2 = -b / (2 * a);
    }
    else {
        solution.root1 = solution.root2 = NAN;  
    }

    return solution;
}

int main() {
    double a, b, c;

    cout << "Enter the elements of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    QuadEq solution = solveQuadEq(a, b, c);

    if (!isnan(solution.root1)) {
        cout << "Roots are: " << solution.root1 << " and " << solution.root2 << endl;
    }
    else {
        cout << "No roots.\n";
    }

    return 0;

}