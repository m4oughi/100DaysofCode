#include <iostream>

constexpr int maxValue(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    constexpr int maxVal = maxValue(10, 20);
    std::cout << "Max value: " << maxVal << std::endl; // Output: 20
    return 0;
}
