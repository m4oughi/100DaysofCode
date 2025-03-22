#include <iostream>

template <typename... Args>
bool allTrue(Args... args) {
    return (... && args);  // Left fold with logical AND
}

int main() {
    std::cout << std::boolalpha;
    std::cout << "All True: " << allTrue(true, true, false, true) << '\n';
    return 0;
}
