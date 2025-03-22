#include <iostream>
#include <variant>

int main() {
    std::variant<int, double, std::string> data = 42;

    if (std::holds_alternative<int>(data)) {
        std::cout << "Active type is int\n";
    } else if (std::holds_alternative<double>(data)) {
        std::cout << "Active type is double\n";
    } else {
        std::cout << "Active type is string\n";
    }

    return 0;
}
