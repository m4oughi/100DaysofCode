#include <iostream>
#include <fstream>

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
            std::cout << "File closed automatically." << std::endl;
        }
    }

    void writeData(const std::string& data) {
        file << data << std::endl;
    }
};

int main() {
    {
        FileRAII file("example.txt");
        file.writeData("No explicit file closure needed.");
    }  // File is automatically closed when `FileRAII` goes out of scope.
}
