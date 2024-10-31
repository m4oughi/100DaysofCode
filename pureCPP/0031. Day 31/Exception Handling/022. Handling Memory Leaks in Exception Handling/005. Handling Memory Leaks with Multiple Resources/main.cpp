#include <iostream>
#include <fstream>
#include <memory>
#include <stdexcept>

class ResourceHandler {
public:
    ResourceHandler(const std::string& fileName, size_t memorySize)
        : data(new int[memorySize]) {
        file.open(fileName);
        if (!file) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened and memory allocated." << std::endl;
    }

    ~ResourceHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed in destructor." << std::endl;
        }
        delete[] data;
        std::cout << "Memory deallocated in destructor." << std::endl;
    }

private:
    std::fstream file;
    int* data;
};

void riskyFunction() {
    ResourceHandler handler("example.txt", 100);  // Handles both memory and file

    throw std::runtime_error("Error occurred!");  // Both resources are cleaned up automatically
}

int main() {
    try {
        riskyFunction();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
