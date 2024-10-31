#include <iostream>
#include <stdexcept>

void checkLogic(int num) {
    if (num < 0) {
        throw std::logic_error("Negative number is not allowed in this operation");
    }
    std::cout << "Valid input: " << num << std::endl;
}

int main() {
    try {
        checkLogic(-5);
    } catch (const std::logic_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
