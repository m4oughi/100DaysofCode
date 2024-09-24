#include <iostream>
#include <variant>

int main() {
    auto checkType = [](auto x) -> std::variant<int, double, std::string> {
        if constexpr (std::is_same_v<decltype(x), int>)
            return x * 2;
        else if constexpr (std::is_same_v<decltype(x), double>)
            return x * 1.5;
        else
            return std::string("Unsupported type");
    };

    std::cout << std::get<int>(checkType(10)) << std::endl;    // Outputs: 20
    std::cout << std::get<double>(checkType(3.14)) << std::endl; // Outputs: 4.71
    std::cout << std::get<std::string>(checkType('A')) << std::endl; // Outputs: Unsupported type
    return 0;
}
