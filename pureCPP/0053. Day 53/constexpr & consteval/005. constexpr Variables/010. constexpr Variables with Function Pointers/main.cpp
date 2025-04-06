#include <iostream>

constexpr int add(int a, int b) {
    return a + b;
}

int main() {
    constexpr auto funcPtr = add;
    constexpr int result = funcPtr(3, 5);
    std::cout << "3 + 5 = " << result << '\n';
    return 0;
}
