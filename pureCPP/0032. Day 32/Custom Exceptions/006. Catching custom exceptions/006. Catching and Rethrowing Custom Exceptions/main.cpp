#include <iostream>
#include <exception>

class FileNotFoundException : public std::exception {
public:
    const char* what() const noexcept override {
        return "File not found exception!";
    }
};

void processFile() {
    try {
        throw FileNotFoundException();
    } catch (const FileNotFoundException& e) {
        std::cout << "Caught in processFile: " << e.what() << std::endl;
        throw;  // Rethrow the exception
    }
}

int main() {
    try {
        processFile();
    } catch (const FileNotFoundException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
