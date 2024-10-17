#include <iostream>

class FileHandler {
private:
    FILE* file;

public:
    FileHandler(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        std::cout << "Opening file" << std::endl;
    }

    // Copy constructor (deleted)
    FileHandler(const FileHandler&) = delete;

    // Move constructor
    FileHandler(FileHandler&& other) noexcept : file(other.file) {
        other.file = nullptr;
        std::cout << "Move Constructor" << std::endl;
    }

    // Move assignment operator
    FileHandler& operator=(FileHandler&& other) noexcept {
        if (this != &other) {
            if (file) fclose(file);  // Close current file
            file = other.file;
            other.file = nullptr;
            std::cout << "Move Assignment Operator" << std::endl;
        }
        return *this;
    }

    ~FileHandler() {
        if (file) {
            fclose(file);
            std::cout << "Closing file" << std::endl;
        }
    }
};

int main() {
    FileHandler fh1("test.txt", "w");
    FileHandler fh2 = std::move(fh1);  // Move constructor

    FileHandler fh3("test2.txt", "w");
    fh3 = std::move(fh2);  // Move assignment operator
}
