#include <iostream>
#include <fstream>
#include <stdexcept>
#include <memory>

class MultipleResourceRAII {
    std::ofstream file;
    std::unique_ptr<int[]> memory;

public:
    MultipleResourceRAII(const std::string& filename, size_t size) : memory(new int[size]) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened and memory allocated." << std::endl;
    }

    ~MultipleResourceRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
        }
        std::cout << "Memory deallocated." << std::endl;
    }

    void simulateException() {
        throw std::runtime_error("Simulated exception.");
    }
};

int main() {
    try {
        MultipleResourceRAII resource("example.txt", 10);
        resource.simulateException();  // Exception thrown here.
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Both file and memory are cleaned up after exception.
}
