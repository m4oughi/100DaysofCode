#include <iostream>
#include <fstream>

class FileRAII {
    std::fstream file;
public:
    FileRAII(const std::string& filename) {
        file.open(filename, std::ios::out | std::ios::trunc);
        if (file.is_open()) {
            std::cout << "File opened!" << std::endl;
        } else {
            std::cerr << "Failed to open file!" << std::endl;
        }
    }

    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed!" << std::endl;
        }
    }

    void write(const std::string& content) {
        if (file.is_open()) {
            file << content;
        }
    }
};

int main() {
    {
        FileRAII file("example.txt");
        file.write("Hello, RAII!");
    }  // File is automatically closed when the object goes out of scope
    return 0;
}
