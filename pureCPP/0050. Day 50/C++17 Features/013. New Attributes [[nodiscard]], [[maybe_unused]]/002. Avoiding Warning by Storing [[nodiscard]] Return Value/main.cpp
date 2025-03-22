#include <iostream>

[[nodiscard]] int computeSum(int a, int b) {
    return a + b;
}

int main() {
    int result = computeSum(3, 5); // No warning, value is used
    std::cout << "Sum: " << result << '\n';
    return 0;
}
