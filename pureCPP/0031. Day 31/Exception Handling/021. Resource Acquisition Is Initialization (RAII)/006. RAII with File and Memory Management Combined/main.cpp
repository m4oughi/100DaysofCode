#include <iostream>
#include <fstream>
#include <memory>
#include <stdexcept>

class FileAndMemoryManager {
public:
    FileAndMemoryManager(const std::string& fileName, size_t memorySize) {
        file.open(fileName);
        if (!file) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened successfully." << std::endl;

        data = std::make_unique<int[]>(memorySize);
        std::cout << "Memory allocated." << std::endl;
    }

    ~FileAndMemoryManager() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed in destructor." << std::endl;
        }
        std::cout << "Memory deallocated in destructor." << std::endl;
    }

private:
    std::fstream file;
    std::unique_ptr<int[]> data;
};

int main() {
    try {
        FileAndMemoryManager manager("example.txt", 100);
        // Resources are automatically managed
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
