#include <iostream>
#include <fstream>
#include <stdexcept>

class FileHandler {
public:
    FileHandler(const std::string& fileName) {
        file.open(fileName);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened." << std::endl;
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed in destructor." << std::endl;
        }
    }

private:
    std::fstream file;
};

void fileOperation() {
    FileHandler fileHandler("example.txt");  // File managed by RAII
    throw std::runtime_error("Error during file operation!");  // Exception thrown
}

int main() {
    try {
        fileOperation();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
