#include <iostream>
#include <iomanip>  

using namespace std;

class Time {
private:
    int hours;    
    int minutes; 
    int seconds;

    void normalize() {
        minutes += seconds / 60;
        seconds %= 60;

        hours += minutes / 60;
        minutes %= 60;

        hours %= 24;
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    void print() const {
        cout << setw(2) << setfill('0') << hours << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << seconds << endl;
    }

    Time add(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes;
        result.hours = hours + other.hours;
        result.normalize();
        return result;
    }
};

int main() {
    const Time t1(10, 70, 80); 
    const Time t2(5, 45, 30);  

    Time t3;

    t3 = t1.add(t2);

    cout << "Time t1: ";
    t1.print();

    cout << "Time t2: ";
    t2.print();

    cout << "Sum of t1 and t2: ";
    t3.print();

    return 0;
}