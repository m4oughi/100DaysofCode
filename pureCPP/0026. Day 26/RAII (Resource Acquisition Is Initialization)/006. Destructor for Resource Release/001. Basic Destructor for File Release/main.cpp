#include <iostream>
#include <fstream>

class FileRAII {
    std::ofstream file;

public:
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened." << std::endl;
        } else {
            std::cerr << "Failed to open file." << std::endl;
        }
    }

    // Destructor releases the file resource automatically.
    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically in destructor." << std::endl;
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
        file.write("Hello, RAII with destructor.");
    }  // File is closed automatically by the destructor.
}
