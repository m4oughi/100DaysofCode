#include <iostream>
#include <fstream>

class FileRAII {
    std::ofstream file;

public:
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened." << std::endl;
        }
    }

    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
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
        file.write("Hello, RAII with scope.");
    }  // File is closed automatically when going out of scope.
}
