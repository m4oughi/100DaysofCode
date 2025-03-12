#include <iostream>

int&& getRvalue() {
    static int value = 100;
    return std::move(value);
}

int main() {
    decltype(auto) result = getRvalue(); // Deduces int&& (rvalue reference)

    std::cout << "Result: " << result << std::endl;
    return 0;
}
