#include <iostream>
#include <variant>

int main() {
    std::variant<int, double> data = 3.14;

    if (auto ptr = std::get_if<int>(&data)) {
        std::cout << "Integer: " << *ptr << '\n';
    } else {
        std::cout << "Not an integer\n";
    }

    return 0;
}
