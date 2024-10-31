#include <iostream>
#include <stdexcept>

void throwError() {
    throw std::runtime_error("Error occurred");
}

int main() {
    try {
        throwError();
    } catch (std::runtime_error e) {  // Caught by value (creates a copy)
        std::cout << "Caught by value: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {  // Caught by reference
        std::cout << "Caught by reference: " << e.what() << std::endl;
    }
    return 0;
}
