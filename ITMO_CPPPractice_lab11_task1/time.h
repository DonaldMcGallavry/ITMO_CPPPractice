#include <iostream>

class Time {
private:
    int hours;   
    int minutes; 
    int seconds;  

    void normalize();

public:

    Time();
    Time(int h, int m, int s);


    void print() const;

    Time operator+(const Time& other) const; 
    Time operator-(const Time& other) const;  
    Time operator+(double seconds) const;    
    friend Time operator+(double seconds, const Time& t); 

    bool operator==(const Time& other) const;
    bool operator!=(const Time& other) const;
    bool operator<(const Time& other) const;
    bool operator>(const Time& other) const;
};