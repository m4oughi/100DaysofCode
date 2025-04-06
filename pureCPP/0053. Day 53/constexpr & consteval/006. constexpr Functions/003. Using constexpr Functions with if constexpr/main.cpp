#include <iostream>

constexpr int compute(int x) {
    if constexpr (x > 10) {
        return x * 2;
    } else {
        return x + 2;
    }
}

int main() {
    constexpr int result = compute(5);
    std::cout << "Result: " << result << '\n';
    return 0;
}
