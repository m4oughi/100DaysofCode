#include <iostream>
#include <type_traits>

int main() {
    auto add = [](auto a, auto b) -> std::enable_if_t<std::is_arithmetic_v<decltype(a)> && std::is_arithmetic_v<decltype(b)>, decltype(a + b)> {
        return a + b;
    };

    std::cout << add(5, 3) << std::endl;             // Outputs: 8
    std::cout << add(2.5, 4.5) << std::endl;         // Outputs: 7
    // std::cout << add("Hello", "World") << std::endl; // Compile-time error
    return 0;
}
