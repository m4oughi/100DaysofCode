#include <iostream>

constexpr auto process = []<typename T>(T value) {
    if constexpr (std::is_integral_v<T>)
        return value * 2;
    else
        return value + 2.5;
};

int main() {
    std::cout << "Integer: " << process(4) << "\n";
    std::cout << "Double: " << process(2.5) << "\n";
}
