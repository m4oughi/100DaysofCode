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

    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically." << std::endl;
        }
    }
};

int main() {
    {
        FileRAII file("example.txt");
        // The file is automatically closed when `file` goes out of scope.
    }
}
