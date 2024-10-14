#include <iostream>
#include <fstream>
#include <memory>

class ResourceRAII {
    std::ofstream file;
    std::unique_ptr<int[]> data;

public:
    ResourceRAII(const std::string& filename, size_t size)
        : data(std::make_unique<int[]>(size)) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened and memory allocated." << std::endl;
    }

    ~ResourceRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically." << std::endl;
        }
        std::cout << "Memory deallocated automatically." << std::endl;
    }

    void writeData(const std::string& data) {
        file << data << std::endl;
    }
};

int main() {
    {
        ResourceRAII resource("example.txt", 10);
        resource.writeData("Managing multiple resources with RAII.");
    }  // Both file and memory are automatically cleaned up.
}
