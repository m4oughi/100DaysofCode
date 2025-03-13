#include <iostream>

template<typename T>
constexpr T default_value = T{};

int main() {
    std::cout << "Default int: " << default_value<int> << std::endl; // 0
    std::cout << "Default double: " << default_value<double> << std::endl; // 0.0
    std::cout << "Default char: " << default_value<char> << std::endl; // '\0'

    return 0;
}
