#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int tenRub = 1000; int tenRubM = 0;       
    int fiveRub = 500; int fiveRubM = 0;    
    int twoRub = 200;  int twoRubM = 0;  
    int rub = 100; int rubM = 0;    
    int fiftyCop = 50; int fiftyCopM = 0;    
    int tenCop = 10; int tenCopM = 0;
    int fiveCop = 5; int fiveCopM = 0;
    int cop = 1; int copM = 0;

    int initSum;

    cout << "Enter sum ";
    cin >> initSum;

    while (initSum != 0)
    {
        if (initSum >= tenRub) {
            initSum -= tenRub;
            tenRubM++;
        }
        else if (initSum >= fiveRub) {
            initSum -= fiveRub;
            fiveRubM++;
        }
        else if (initSum >= twoRub) {
            initSum -= twoRub;
           twoRubM++;
        }
        else if (initSum >= rub) {
            initSum -= rub;
            rubM++;
        }
        else if (initSum >= fiftyCop) {
            initSum -= fiftyCop;
            fiftyCopM++;
        }
        else if (initSum >= tenCop) {
            initSum -= tenCop;
            tenCopM++;
        }
        else if (initSum >= fiveCop) {
            initSum -= fiveCop;
            fiveCopM++;
        }
        else {
            initSum -= cop;
            copM++;
        }
    }

    cout << "denomination 10 rub: " << tenRubM << "\ndenomination 5 rub: " << fiveRubM << "\ndenomination 2 rub: " << twoRubM
        << "\ndenomination 1 rub: " << rubM << "\ndenomination 50 kopecks: " << fiftyCopM << "\ndenomination 10 kopecks: " 
        << tenCopM << "\ndenomination 5 kopecks: " << fiveCopM << "\ndenomination 1 kopecks: " << copM << endl;
    return 0;
}