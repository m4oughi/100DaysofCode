#include <iostream>
#include <exception>
#include <string>

class FileException : public std::runtime_error {
private:
    std::string fileName;
public:
    FileException(const std::string& file, const std::string& msg) 
        : std::runtime_error(msg), fileName(file) {}

    const char* getFileName() const {
        return fileName.c_str();
    }
};

int main() {
    try {
        throw FileException("config.txt", "File not found");
    } catch (const FileException& e) {
        std::cout << "Error: " << e.what() << ", File: " << e.getFileName() << std::endl;
    }
    return 0;
}
