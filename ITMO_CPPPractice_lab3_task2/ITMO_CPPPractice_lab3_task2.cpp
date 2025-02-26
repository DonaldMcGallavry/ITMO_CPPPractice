#include <math.h>
#include <iostream>

using namespace std;

double Pow(double a) {
    if (a > 0) {
        return pow(a, 1.0 / 3); 
    }
    return -pow(-a, 1.0 / 3);
}

double Iteration(double a) {
   
    if (a == 0) {
        return 0; 
    }

    double x = a;
    double prevX;

    do {
        prevX = x;
        x = (a / (prevX * prevX) + 2 * prevX) / 3; 
    } while (abs(x - prevX) > 1e-6);

    return x;
}

int main()
{
    double a;
    cout << "Enter number: ";
    cin >> a;

    cout << "Pow method: " << Pow(a) << endl;
    cout << "Iteration method: " << Iteration(a) << endl;
}


