#include <iostream>

int main() {
    int x = 100;
    int &&rRef = std::move(x);  // Treats x as an R-value and binds to rRef
    rRef = 200;  // Modifies x
    std::cout << x << std::endl;  // Output: 200

    return 0;
}