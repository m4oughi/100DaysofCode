#include <iostream>

void process() {
    try {
        throw std::runtime_error("Error occurred in process");
    } catch (...) {
        std::cout << "Caught in process, rethrowing..." << std::endl;
        throw;  // Rethrow the current exception
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
