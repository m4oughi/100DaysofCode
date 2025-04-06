#include <iostream>

constexpr auto add = [](int a, int b) {
    return a + b;
};

int main() {
    constexpr int sum = add(3, 5);
    std::cout << "Sum: " << sum << '\n';
    return 0;
}
