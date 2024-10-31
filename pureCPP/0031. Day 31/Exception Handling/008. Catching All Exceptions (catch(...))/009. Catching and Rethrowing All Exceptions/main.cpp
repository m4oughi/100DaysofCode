#include <iostream>

void riskyFunction() {
    throw std::runtime_error("Runtime error occurred");
}

int main() {
    try {
        try {
            riskyFunction();
        } catch (...) {
            std::cout << "Caught an unknown exception, rethrowing..." << std::endl;
            throw;  // Rethrowing the exception
        }
    } catch (const std::exception& e) {
        std::cout << "Caught rethrown standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Caught rethrown unknown exception" << std::endl;
    }
    return 0;
}
