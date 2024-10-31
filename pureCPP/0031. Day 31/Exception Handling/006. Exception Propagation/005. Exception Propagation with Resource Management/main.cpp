#include <iostream>
#include <fstream>
#include <exception>

class FileOpenException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Failed to open file!";
    }
};

void openFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw FileOpenException();  // Throwing exception
    }
}

void processFile(const std::string& filename) {
    openFile(filename);  // Exception propagates to this function
    // Additional file processing here
}

int main() {
    try {
        processFile("non_existent_file.txt");  // Exception propagates to main
    } catch (const FileOpenException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
