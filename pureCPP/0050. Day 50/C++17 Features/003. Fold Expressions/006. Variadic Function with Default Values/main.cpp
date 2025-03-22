#include <iostream>

template <typename... Args>
auto sumWithDefault(Args... args) {
    return (args + ... + 0);  // Right fold with default value
}

int main() {
    std::cout << "Sum: " << sumWithDefault(10, 20, 30) << '\n';
    std::cout << "Sum with no arguments: " << sumWithDefault() << '\n';
    return 0;
}
