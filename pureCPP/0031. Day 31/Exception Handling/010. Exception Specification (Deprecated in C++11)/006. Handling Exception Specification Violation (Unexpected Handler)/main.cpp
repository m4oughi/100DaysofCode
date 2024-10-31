#include <iostream>
#include <stdexcept>
#include <exception>

void customUnexpected() {
    std::cout << "Unexpected exception caught!" << std::endl;
    std::terminate();
}

void mayThrow() throw(std::logic_error) {
    throw std::runtime_error("Violation of exception specification!");
}

int main() {
    std::set_unexpected(customUnexpected);  // Set custom unexpected handler
    try {
        mayThrow();
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    }
    return 0;
}
