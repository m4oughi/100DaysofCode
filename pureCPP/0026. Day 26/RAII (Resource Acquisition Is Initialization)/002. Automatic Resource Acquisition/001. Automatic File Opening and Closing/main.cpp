#include <iostream>
#include <fstream>

class FileRAII {
    std::ifstream file;

public:
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File opened automatically." << std::endl;
        } else {
            std::cerr << "Failed to open the file." << std::endl;
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
        // File is opened when `file` is created and closed when `file` goes out of scope.
    }
}
