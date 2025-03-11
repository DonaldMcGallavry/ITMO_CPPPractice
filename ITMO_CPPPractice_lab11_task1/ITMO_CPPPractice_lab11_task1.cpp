#include <iostream>
#include "time.h"

int main() {
    
    Time t1(10, 30, 45);
    Time t2(5, 45, 30);

   
    Time sum = t1 + t2;
    std::cout << " t1 + t2: ";
    sum.print();

    Time diff = t1 - t2;
    std::cout << " t1 - t2: ";
    diff.print();

    Time t3 = t1 + 3600.5; 
    std::cout << "t1 + 3600.5 seconds: ";
    t3.print();

    Time t4 = 7200.0 + t1;  
    std::cout << "7200 seconds + t1: ";
    t4.print();

    if (t1 == t2) {
        std::cout << "t1 = t2\n";
    }
    else if (t1 < t2) {
        std::cout << "t1 < t2\n";
    }
    else {
        std::cout << "t1 > t2\n";
    }

    return 0;
}