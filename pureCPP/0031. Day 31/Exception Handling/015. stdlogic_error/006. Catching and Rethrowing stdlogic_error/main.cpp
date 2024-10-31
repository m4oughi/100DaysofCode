#include <iostream>
#include <stdexcept>

void checkCondition() {
    throw std::logic_error("Error in logical condition");
}

void process() {
    try {
        checkCondition();
    } catch (const std::logic_error& e) {
        std::cout << "Caught in process: " << e.what() << std::endl;
        throw;  // Rethrow exception to be caught in main
    }
}

int main() {
    try {
        process();
    } catch (const std::logic_error& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
