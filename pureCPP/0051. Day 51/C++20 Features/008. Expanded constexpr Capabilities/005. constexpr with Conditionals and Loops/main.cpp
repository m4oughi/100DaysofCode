#include <iostream>

constexpr int sumUpTo(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    constexpr int result = sumUpTo(10);
    std::cout << "Sum of first 10 numbers: " << result << "\n";
}
