#include <iostream>

void noThrow() noexcept {
    std::cout << "This function will not throw exceptions." << std::endl;
}

int main() {
    try {
        noThrow();
    } catch (...) {
        std::cout << "This will never be executed because noThrow is noexcept." << std::endl;
    }
    return 0;
}
