#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int n) {
    
    if (n == 0) {
        return "";
    }
    
    return decimalToBinary(n / 2) + to_string(n % 2);
}

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    cout << "Definition of number " << n << " in binary = " << decimalToBinary(n) << endl;
    
    return 0;
}

