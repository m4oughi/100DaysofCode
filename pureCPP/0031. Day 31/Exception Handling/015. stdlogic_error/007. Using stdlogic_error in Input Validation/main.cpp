#include <iostream>
#include <stdexcept>

void validateInput(int age) {
    if (age < 0 || age > 150) {
        throw std::logic_error("Invalid age: must be between 0 and 150");
    }
    std::cout << "Valid age: " << age << std::endl;
}

int main() {
    try {
        validateInput(200);
    } catch (const std::logic_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
