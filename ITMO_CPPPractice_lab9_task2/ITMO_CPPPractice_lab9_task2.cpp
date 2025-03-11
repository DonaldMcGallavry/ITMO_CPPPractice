#include <iostream>
#include <iomanip>  

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    bool isValid(int h, int m, int s) const {
        return (h >= 0 && h < 24) &&
            (m >= 0 && m < 60) &&
            (s >= 0 && s < 60);
    }

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) {
        if (!isValid(h, m, s))
        {
            throw invalid_argument("Incorrect time elements: hours(1-23), minutes(1-59), seconds(1-59)");
        }
        hours = h;
        minutes = m;
        seconds = s;
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
        return result;
    }
};

int main() {
    try
    {
        const Time t1(10, 70, 80);
        const Time t2(5, 45, 30);
        const Time t4(25, 73, 123);

        Time t3;

        t3 = t1.add(t2);

        cout << "Time t1: ";
        t1.print();

        cout << "Time t2: ";
        t2.print();

        cout << "Sum of t1 and t2: ";
        t3.print();


    }
    catch (const invalid_argument& e)
    {
        cerr << "Error " << e.what() << endl;
    }
    return 0;
}