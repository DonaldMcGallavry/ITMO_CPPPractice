#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1{}, x2{}, x3{}, x4{}, x5{}, y1{}, y2{}, y3{}, y4{}, y5{};
    
    cout << "Incert x1, y1, x2, y2, x3, y3, x4, y4, x5, y5 \n";
    
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
    
    double s = fabs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2);
    
    cout << "Square : " << setprecision(3) << s;
   
    return 0;
}

