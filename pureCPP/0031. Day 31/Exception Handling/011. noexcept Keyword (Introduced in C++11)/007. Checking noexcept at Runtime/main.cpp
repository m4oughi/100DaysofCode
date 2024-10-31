#include <iostream>

void noThrow() noexcept {
    std::cout << "No-throw function." << std::endl;
}

void mayThrow() {
    std::cout << "May-throw function." << std::endl;
    throw std::runtime_error("Exception thrown.");
}

int main() {
    std::cout << "noThrow is noexcept: " << noexcept(noThrow()) << std::endl;
    std::cout << "mayThrow is noexcept: " << noexcept(mayThrow()) << std::endl;

    return 0;
}
