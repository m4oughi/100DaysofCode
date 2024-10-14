#include <iostream>
#include <fstream>

class FileHandler {
    std::ofstream file;
public:
    FileHandler(const std::string& fileName) {
        file.open(fileName);
        if (file.is_open()) {
            std::cout << "File opened: " << fileName << std::endl;
        } else {
            std::cerr << "Failed to open file: " << fileName << std::endl;
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
        }
    }

    void write(const std::string& data) {
        if (file.is_open()) {
            file << data;
        }
    }
};

int main() {
    {
        FileHandler file("example.txt");
        file.write("Hello, RAII with file handling!");
    }
    // File will be automatically closed when fileHandler goes out of scope
    return 0;
}
