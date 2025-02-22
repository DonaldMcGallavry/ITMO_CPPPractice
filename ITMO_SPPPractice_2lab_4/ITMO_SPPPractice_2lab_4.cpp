#include <iostream>
#include <cmath>
using namespace std;

int main() {
   
    const int targetScore = 50;
    int totalScore = 0;
    int shotCount = 0;

   
    while (totalScore <= targetScore) {
        double x, y;
        cout << "Enter (x y): ";
        cin >> x >> y;

        double distance = sqrt(x * x + y * y);

        int score = 0;
        if (distance < 1) {
            score = 10; 
        }
        else if (distance < 2) {
            score = 5; 
        }
        else  {
            score = 0; 
        }

        totalScore += score;
        shotCount++;

        
       cout << "Shot " << shotCount << ": (" << x << ", " << y << ") -> " << score << " points. Total score: " << totalScore <<::endl;
    }
    string level;
    if (shotCount <= 5) {
        level = "Sniper";
    }
    else if (shotCount <= 10) {
        level = "good shooter";
    }
    else {
        level = "Novice";
    }

    cout << "\nShooting complete!" << endl;
    cout << "total shots: " << shotCount << endl;
    cout << "Lvl: " << level << endl;

    return 0;
}