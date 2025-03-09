#include <iostream>
using namespace std;

struct Time {
    int hours;   
    int minutes; 
    int seconds;  

    bool isValid() const {
        return (hours >= 0 && hours < 24) &&
            (minutes >= 0 && minutes < 60) &&
            (seconds >= 0 && seconds < 60);
    }

    void print() const {
        cout << hours << ":" << minutes << ":" << seconds;
    }

    int toSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time addTime(const Time& other) const {
        Time result;
        int totalSeconds = toSeconds() + other.toSeconds();

        result.hours = totalSeconds / 3600 % 24;  
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;

        return result;
    }

    Time subtractTime(const Time& other) const {
        Time result;
        int totalSeconds = toSeconds() - other.toSeconds();

        /*if (totalSeconds < 0) {
            totalSeconds += 24 * 3600; 
        }*/

        result.hours = totalSeconds / 3600 % 24;
        result.minutes = (totalSeconds % 3600) / 60;
        result.seconds = totalSeconds % 60;

        return result;
    }
};

Time inputTime() {
    Time t;
    cout << "Enter time (hours minutes seconds): ";
    cin >> t.hours >> t.minutes >> t.seconds;

    while (!t.isValid()) {
        cout << "Incorrect, try again: ";
        cin >> t.hours >> t.minutes >> t.seconds;
    }

    return t;
}

int main() {

    cout << "Enter first argument:\n";
    Time time1 = inputTime();

    cout << "Enter second argument:\n";
    Time time2 = inputTime();

    cout << "Seconds in first argument: " << time1.toSeconds() << endl;

    cout << "Seconds in second argument: " << time2.toSeconds() << endl;

    Time sum = time1.addTime(time2);
    cout << "Sum: ";
    sum.print();
    cout << endl;

    Time diff = time1.subtractTime(time2);
    cout << "Subtraction: ";
    diff.print();
    cout << endl;

    return 0;
}