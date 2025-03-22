#include <iostream>
#include <any>

int main() {
    std::any value = 42;  // Store an integer

    std::cout << "Stored value: " << std::any_cast<int>(value) << '\n';

    return 0;
}
