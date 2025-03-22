#include <iostream>
#include <any>

int main() {
    std::any value;

    if (value.has_value()) {
        std::cout << "Value exists.\n";
    } else {
        std::cout << "No value.\n";
    }

    value = 100;
    std::cout << "Value exists: " << std::any_cast<int>(value) << '\n';

    return 0;
}
