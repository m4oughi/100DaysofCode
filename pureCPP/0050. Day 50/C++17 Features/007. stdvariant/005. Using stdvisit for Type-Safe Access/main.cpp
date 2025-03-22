#include <iostream>
#include <variant>

void visitor(const std::variant<int, double, std::string>& data) {
    std::visit([](const auto& value) { std::cout << "Value: " << value << '\n'; }, data);
}

int main() {
    std::variant<int, double, std::string> data = 42;
    visitor(data);

    data = 3.14;
    visitor(data);

    data = "Hello";
    visitor(data);

    return 0;
}
