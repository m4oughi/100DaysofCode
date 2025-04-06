#include <iostream>

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    constexpr int result = add(5, 3);
    std::cout << "5 + 3 = " << result << '\n';
    return 0;
}
