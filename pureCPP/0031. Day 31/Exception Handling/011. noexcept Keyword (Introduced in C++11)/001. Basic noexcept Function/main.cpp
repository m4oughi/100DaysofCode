#include <iostream>

void noThrow() noexcept {
    std::cout << "This function will not throw exceptions." << std::endl;
}

int main() {
    noThrow();
    return 0;
}
