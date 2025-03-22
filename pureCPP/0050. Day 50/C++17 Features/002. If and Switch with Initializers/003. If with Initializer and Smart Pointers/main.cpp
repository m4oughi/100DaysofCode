#include <iostream>
#include <memory>

int main() {
    if (std::unique_ptr<int> ptr = std::make_unique<int>(5); ptr) {
        std::cout << "Pointer is valid: " << *ptr << '\n';
    } else {
        std::cout << "Pointer is null.\n";
    }
    return 0;
}
