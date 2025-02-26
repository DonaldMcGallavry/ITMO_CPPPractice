#include <iostream>
using namespace std;


bool Input(int& a, int& b) {
    cout << "Enter two simple numbers: ";
    if (!(cin >> a >> b)) {
        
        cin.clear(); 
        return false; 
    }

    if (a <= 1 || b <= 1) {
        return false; 
    }
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0)
            return false;
    }
    for (int i = 2; i <= sqrt(b); ++i) {
        if (b % i == 0)
            return false;
    }

    return true;
}

int main() {
    int a, b;

    if (!Input(a, b)) {
        cerr << "Error.\n";
        return 1;
    }

    int s = a + b;
    cout << "Sum: " << s << endl;
    return 0;
}