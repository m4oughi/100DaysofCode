#include <iostream>

void logError() {
    std::cout << "Logging unknown exception" << std::endl;
}

void riskyFunction() {
    throw std::string("Unknown error");  // Throwing a string
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Caught a standard exception: " << e.what() << std::endl;
    } catch (...) {
        logError();  // Catch all unknown exceptions and log the error
        std::cout << "Caught an unknown exception" << std::endl;
    }
    return 0;
}
