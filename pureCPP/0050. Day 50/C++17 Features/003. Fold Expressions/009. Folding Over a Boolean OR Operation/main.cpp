#include <iostream>

template <typename... Args>
bool anyTrue(Args... args) {
    return (... || args);  // Left fold with logical OR
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "Any True: " << anyTrue(false, false, true, false) << '\n';
    return 0;
}
