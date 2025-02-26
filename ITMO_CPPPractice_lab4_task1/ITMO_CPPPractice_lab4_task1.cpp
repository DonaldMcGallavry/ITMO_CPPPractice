#include <math.h>
#include <iostream>

using namespace std;

int Myroot(double a, double b, double c, double& x1, double& x2) {
    double d = b * b - 4 * a * c; 

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        return 1; 
    }
    else if (d == 0) {
  
        x1 = x2 = -b / (2 * a);
        return 0; 
    }
    else {
      
        return -1;
    }
}

int main() {
    double a, b, c;
    cout << "Enter (a, b, c): ";
    cin >> a >> b >> c;

    double x1, x2;
    int result = Myroot(a, b, c, x1, x2);

    switch (result)
    {
        case(1):
            cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << endl;
            break;
        case(0):
            cout << "Only one root: x1 = x2 = " << x1 << endl;
            break;
        case(-1):
            cout << "No roots" << endl;
            break;
    }
              
  /*  if (result == 1) {
        cout << "roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (result == 0) {
        cout << "only one root: x1 = x2 = " << x1 << endl;
    }
    else {
        cout << "no roots" << endl;
    }

    return 0;*/
}
