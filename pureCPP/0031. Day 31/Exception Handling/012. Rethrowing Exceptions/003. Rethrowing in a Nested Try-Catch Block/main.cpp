#include <iostream>

void process() {
    try {
        throw std::runtime_error("Error in process");
    } catch (...) {
        std::cout << "Caught in process, rethrowing..." << std::endl;
        throw;
    }
}

void nestedProcess() {
    try {
        process();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught in nestedProcess: " << e.what() << std::endl;
        throw;  // Rethrow the exception for higher-level handling
    }
}

int main() {
    try {
        nestedProcess();
    } catch (const std::exception& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
