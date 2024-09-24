#include <iostream>

template<typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double a = 1.5, b = 3.5;
    
    swapValues(x, y);  // Swap integers
    swapValues(a, b);  // Swap doubles
    
    std::cout << "x: " << x << ", y: " << y << std::endl;  // Output: x: 20, y: 10
    std::cout << "a: " << a << ", b: " << b << std::endl;  // Output: a: 3.5, b: 1.5


    return 0;
}