#include <iostream>
#include <fstream>
#include <memory>

class FileAndMemoryRAII {
    std::ofstream file;
    std::unique_ptr<int[]> memory;

public:
    // Constructor acquires both file and memory resources.
    FileAndMemoryRAII(const std::string& filename, int size) : memory(new int[size]) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened and memory allocated." << std::endl;
    }

    ~FileAndMemoryRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
        }
        std::cout << "Memory deallocated." << std::endl;
    }

    void writeData(const std::string& data) {
        if (file.is_open()) {
            file << data << std::endl;
        }
    }
};

int main() {
    try {
        FileAndMemoryRAII resource("example.txt", 10);
        resource.writeData("RAII with multiple resources.");
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }  // Both resources are released automatically.
}
