#include <iostream>
#include <stdexcept>

void processInput(int value) {
    if (value == 0) {
        throw std::logic_error("Invalid logic: Zero input");
    }
    throw std::runtime_error("Runtime error: Generic error");
}

int main() {
    try {
        processInput(0);
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught unknown exception" << std::endl;
    }
    return 0;
}
