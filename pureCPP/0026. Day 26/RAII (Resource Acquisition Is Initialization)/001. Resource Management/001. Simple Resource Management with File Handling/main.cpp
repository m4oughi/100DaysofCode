#include <iostream>
#include <fstream>

class FileRAII {
    std::ofstream file;

public:
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened successfully." << std::endl;
        }
    }

    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically." << std::endl;
        }
    }

    void write(const std::string& content) {
        if (file.is_open()) {
            file << content << std::endl;
        }
    }
};

int main() {
    {
        FileRAII file("example.txt");
        file.write("Hello, RAII!");
    }  // The file is closed when `file` goes out of scope.
}
