#include <iostream>

constexpr int sumUpto(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    constexpr int result = sumUpto(5); // Computed at compile-time
    std::cout << "Sum up to 5: " << result << std::endl; // Output: 15
    return 0;
}
