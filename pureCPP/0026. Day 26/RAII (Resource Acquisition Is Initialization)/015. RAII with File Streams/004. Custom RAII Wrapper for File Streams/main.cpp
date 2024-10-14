#include <iostream>
#include <fstream>

class FileWrapper {
    std::ofstream file;
public:
    FileWrapper(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened: " << filename << std::endl;
        } else {
            std::cerr << "Failed to open file: " << filename << std::endl;
        }
    }

    ~FileWrapper() {
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
    {
        FileWrapper file("custom_raii.txt");
        file.writeData("Using a custom RAII wrapper for file streams.");
    }
    std::cout << "Custom file wrapper has closed the file." << std::endl;
}
