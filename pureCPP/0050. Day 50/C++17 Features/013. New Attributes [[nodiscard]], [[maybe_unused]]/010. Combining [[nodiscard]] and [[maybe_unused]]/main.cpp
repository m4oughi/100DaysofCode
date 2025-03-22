#include <iostream>

[[nodiscard]] int calculate(int a, int b) {
    return a + b;
}

int main() {
    [[maybe_unused]] int result = calculate(10, 20); // Avoids warning even if unused
    return 0;
}
