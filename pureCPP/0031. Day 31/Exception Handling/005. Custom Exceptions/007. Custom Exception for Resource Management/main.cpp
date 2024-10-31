#include <iostream>
#include <fstream>
#include <exception>

class FileOpenException : public std::exception {
    const char* what() const noexcept override {
        return "Failed to open the file!";
    }
};

void openFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw FileOpenException();  // Throwing custom exception if file can't be opened
    }
}

int main() {
    try {
        openFile("non_existent_file.txt");  // Trying to open a non-existent file
    } catch (const FileOpenException& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
