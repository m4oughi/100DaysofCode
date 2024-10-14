#include <iostream>
#include <fstream>

class ResourceRAII {
    std::ofstream file;

public:
    ResourceRAII(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened." << std::endl;
    }

    ~ResourceRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
        }
    }

    void writeData(const std::string& data) {
        if (file.is_open()) {
            file << data << std::endl;
        }
    }
};

int main() {
    try {
        ResourceRAII resource("example.txt");
        resource.writeData("RAII in exception handling.");
        // Simulate an exception
        throw std::runtime_error("Some error occurred.");
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }  // File is closed automatically even in case of an exception.
}
