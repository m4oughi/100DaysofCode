#include <iostream>
#include <fstream>
#include <stdexcept>

class FileRAII {
    std::ofstream file;

public:
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File opened." << std::endl;
    }

    ~FileRAII() {
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
        FileRAII file("example.txt");
        file.writeData("RAII ensures file closure.");
        throw std::runtime_error("Simulated exception");
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // File is automatically closed when exception is thrown.
}
