#include <iostream>

constexpr int square(int x) {
    return x * x;
}

int main() {
    int n;
    std::cin >> n;  // User input at runtime
    int result = square(n);  // Runtime evaluation
    std::cout << "Square: " << result << '\n';
}
