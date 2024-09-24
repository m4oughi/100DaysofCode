#include <iostream>

void increment(int &num) {
    num++;
}

void increment(double &num) {
    num += 0.5;
}

int main() {
    int i = 5;
    double d = 5.5;
    
    increment(i);  // Calls int version
    increment(d);  // Calls double version
    
    std::cout << "i: " << i << ", d: " << d << std::endl;  // Output: i: 6, d: 6.0


    return 0;
}