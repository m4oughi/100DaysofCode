#include <iostream>
#include <stdexcept>

void processData(int value) {
    if (value < 0)
        throw std::invalid_argument("Negative value not allowed");
    if (value == 0)
        throw std::runtime_error("Runtime error: Zero value");
}

int main() {
    try {
        processData(0);
    } catch (const std::invalid_argument& e) {
        std::cout << "Caught invalid_argument: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
