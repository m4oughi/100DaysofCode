#include <iostream>
#include <fstream>
#include <stdexcept>

void riskyFileOperation() {
    std::ofstream file("error.txt");
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file.");
    }
    file << "Writing data before exception." << std::endl;
    throw std::runtime_error("Error during file operation.");
    // File will still be closed due to RAII when the exception is thrown.
}

int main() {
    try {
        riskyFileOperation();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    std::cout << "File stream closed after exception." << std::endl;
}
