#include <iostream>
#include <utility>  // For std::swap

int main() {
    int a = 10, b = 20;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    
    std::swap(a, b);
    
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
}
