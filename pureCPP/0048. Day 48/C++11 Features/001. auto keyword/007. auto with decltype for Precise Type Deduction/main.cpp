#include <iostream>

int main() {
    int x = 10;
    double y = 5.5;

    auto sum = x + y;  // Deduces double
    decltype(x + y) preciseSum = x + y; // Also double

    std::cout << "Sum: " << sum << ", Precise Sum: " << preciseSum << std::endl;
    return 0;
}
