#include "time.h"
#include <cmath>
#include <iomanip> 


Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    normalize(); 
}

void Time::normalize() {
  
    minutes += seconds / 60;
    seconds %= 60;

    
    hours += minutes / 60;
    minutes %= 60;

    hours %= 24;
}

void Time::print() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
}

Time Time::operator+(const Time& other) const {
    Time result;
    result.seconds = seconds + other.seconds;
    result.minutes = minutes + other.minutes;
    result.hours = hours + other.hours;
    result.normalize(); 
    return result;
}

Time Time::operator-(const Time& other) const {
    Time result;
    int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
    int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
    int diff = totalSeconds1 - totalSeconds2;

    if (diff < 0) diff += 24 * 3600;  

    result.hours = diff / 3600 % 24;
    result.minutes = (diff % 3600) / 60;
    result.seconds = diff % 60;
    return result;
}

Time Time::operator+(double sec) const {
    Time result;
    int totalSeconds = hours * 3600 + minutes * 60 + seconds + static_cast<int>(sec);
    result.hours = totalSeconds / 3600 % 24;
    result.minutes = (totalSeconds % 3600) / 60;
    result.seconds = totalSeconds % 60;
    return result;
}

Time operator+(double sec, const Time& t) {
    return t + sec; 
}

bool Time::operator==(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

bool Time::operator!=(const Time& other) const {
    return !(*this == other);
}

bool Time::operator<(const Time& other) const {
    if (hours != other.hours) return hours < other.hours;
    if (minutes != other.minutes) return minutes < other.minutes;
    return seconds < other.seconds;
}

bool Time::operator>(const Time& other) const {
    return other < *this;
}

