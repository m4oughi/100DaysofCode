#include <iostream>
#include <utility>

int main() {
    int a = 5, b = 10;
    
    b = std::exchange(a, b); // Assigns 'b' to 'a' and stores 'a' in 'b'

    std::cout << "After swap: a = " << a << ", b = " << b << "\n";

    return 0;
}
