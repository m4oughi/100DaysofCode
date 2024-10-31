#include <iostream>
#include <stdexcept>

void processData(int value) {
    if (value < 0)
        throw std::logic_error("Negative value not allowed");
    if (value == 0)
        throw std::runtime_error("Runtime error: Zero value");
}

int main() {
    try {
        processData(-1);
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
