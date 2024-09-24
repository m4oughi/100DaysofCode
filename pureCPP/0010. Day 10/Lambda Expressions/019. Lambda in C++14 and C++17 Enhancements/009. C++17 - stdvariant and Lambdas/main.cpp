#include <iostream>
#include <variant>
#include <string>

int main() {
    std::variant<int, std::string> data = "Hello";

    auto visitor = [](auto&& arg) {
        std::cout << arg << std::endl;
    };

    std::visit(visitor, data); // Outputs: Hello

    data = 42;
    std::visit(visitor, data); // Outputs: 42

    return 0;
}
