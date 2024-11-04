#include <iostream>
#include <exception>
#include <fstream>

class FileException : public std::exception {
public:
    const char* what() const noexcept override {
        return "File operation error!";
    }
};

void readFile() {
    std::ifstream file("nonexistent.txt");
    if (!file) {
        throw FileException();
    }
}

int main() {
    try {
        readFile();
    } catch (const FileException& e) {
        std::cout << "Caught file error: " << e.what() << std::endl;
    }
    return 0;
}
