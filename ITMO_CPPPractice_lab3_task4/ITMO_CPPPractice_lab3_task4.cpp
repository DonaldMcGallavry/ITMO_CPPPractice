#include <iostream>
#include <math.h>

using namespace std;

int sum(int n) {
   
    if (n == 1) {
        return 5;
    }
    return 5 * n + sum(n - 1);
}



int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    if (n <= 0)
        cout << "Incorrect number";
    else
        cout << "Sum S = 5 + 10 + 15 + … + 5*n where n = " << n << " = " << sum(n) << endl;
    
    return 0;
}

