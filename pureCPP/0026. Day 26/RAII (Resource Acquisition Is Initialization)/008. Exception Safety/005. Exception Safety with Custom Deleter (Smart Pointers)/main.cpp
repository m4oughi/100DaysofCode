#include <iostream>
#include <memory>
#include <cstdio>
#include <stdexcept>

struct FileDeleter {
    void operator()(std::FILE* file) const {
        if (file) {
            std::fclose(file);
            std::cout << "File closed by custom deleter." << std::endl;
        }
    }
};

int main() {
    try {
        std::unique_ptr<std::FILE, FileDeleter> filePtr(std::fopen("example.txt", "w"));
        if (!filePtr) {
            throw std::runtime_error("Failed to open file.");
        }
        std::fputs("RAII with custom deleter.", filePtr.get());
        throw std::runtime_error("Simulated exception after writing to file.");
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // File is automatically closed by custom deleter after exception.
}
