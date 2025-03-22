#include <iostream>
#include <any>

int main() {
    std::any value = 42;

    try {
        std::cout << std::any_cast<std::string>(value) << '\n';  // Wrong type
    } catch (const std::bad_any_cast& e) {
        std::cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}
