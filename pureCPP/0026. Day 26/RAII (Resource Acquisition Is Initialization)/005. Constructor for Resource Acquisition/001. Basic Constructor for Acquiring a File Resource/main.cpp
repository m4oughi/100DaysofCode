#include <iostream>
#include <fstream>

class FileRAII {
    std::ofstream file;

public:
    // Constructor acquires the file resource.
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened." << std::endl;
        } else {
            std::cerr << "Failed to open file." << std::endl;
        }
    }

    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically." << std::endl;
        }
    }

    void write(const std::string& data) {
        if (file.is_open()) {
            file << data << std::endl;
        }
    }
};

int main() {
    {
        FileRAII file("example.txt");
        file.write("Hello, RAII");
    }  // File is closed automatically when the object goes out of scope.
}
