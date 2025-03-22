#include <iostream>
#include <variant>

int main() {
    std::variant<int, double, std::string> data;

    data = 10;
    std::cout << "Integer: " << std::get<int>(data) << '\n';

    data = 3.14;
    std::cout << "Double: " << std::get<double>(data) << '\n';

    data = "Hello";
    std::cout << "String: " << std::get<std::string>(data) << '\n';

    return 0;
}
