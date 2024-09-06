#include <iostream>

int main() {
    int x = 10;
    int &ref = x;  // Mutable reference to x
    ref = 20;  // Modifies the original value of x
    std::cout << x << std::endl;  // Output: 20

    return 0;
}