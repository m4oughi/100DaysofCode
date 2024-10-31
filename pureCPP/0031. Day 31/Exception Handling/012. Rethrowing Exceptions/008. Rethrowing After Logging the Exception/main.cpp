#include <iostream>
#include <stdexcept>

void logException(const std::exception& e) {
    std::cout << "Logging exception: " << e.what() << std::endl;
}

void process() {
    try {
        throw std::runtime_error("Error in process");
    } catch (const std::exception& e) {
        logException(e);  // Log the exception before rethrowing
        throw;
    }
}

int main() {
    try {
        process();
    } catch (const std::exception& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
