#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isValidSNILS(const string snils) {

    string cleanSnils;

    for (char ch : snils) {
        if (ch == ' ' || ch == '-') {
            continue; 
        }
        if (!isdigit(ch)) {
            return false; 
        }
        cleanSnils += ch; 
    }
    

    if (cleanSnils.length() != 11) {
        return false;
    }

    for (int i = 9; i > 1; --i) {
        if (cleanSnils[i] == cleanSnils[i - 1] && cleanSnils[i] == cleanSnils[i - 2]) {
            return false;
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        int digit = cleanSnils[i] - '0';
        sum += digit * (9 - i);
    }

    int controlNumber;
    if (sum < 100) {
        controlNumber = sum;
    }
    else if (sum == 100 || sum == 101) {
        controlNumber = 0;
    }
    else {
        controlNumber = sum % 101;
        if (controlNumber == 100) {
            controlNumber = 0;
        }
    }

    int givenControlNumber = (cleanSnils[9] - '0') * 10 + (cleanSnils[10] - '0');

    return controlNumber == givenControlNumber;
}

int main() {
    string snils;
    cout << "Enter SNILS: ";
    getline(cin, snils);

    if (isValidSNILS(snils)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}