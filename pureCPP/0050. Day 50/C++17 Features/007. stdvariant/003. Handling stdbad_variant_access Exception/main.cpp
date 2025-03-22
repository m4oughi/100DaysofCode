#include <iostream>
#include <variant>

int main() {
    std::variant<int, double> data = 3.14;

    try {
        std::cout << std::get<int>(data) << '\n'; // Wrong access
    } catch (const std::bad_variant_access& e) {
        std::cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}
