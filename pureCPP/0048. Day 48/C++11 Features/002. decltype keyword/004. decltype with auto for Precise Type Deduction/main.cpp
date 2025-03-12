#include <iostream>

int main() {
    int x = 10;
    double y = 2.5;

    auto sum = x + y;             // `auto` deduces double
    decltype(x + y) preciseSum;   // `decltype(x + y)` also deduces double

    preciseSum = sum;

    std::cout << "Sum: " << sum << ", Precise Sum: " << preciseSum << std::endl;
    return 0;
}
