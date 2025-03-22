#include <iostream>
#include <variant>

int main() {
    std::variant<int, double, std::string> data = "Hello";

    std::cout << "Index: " << data.index() << '\n';  // Output: 2 (0-based index)

    data = 3.14;
    std::cout << "Index: " << data.index() << '\n';  // Output: 1

    return 0;
}
