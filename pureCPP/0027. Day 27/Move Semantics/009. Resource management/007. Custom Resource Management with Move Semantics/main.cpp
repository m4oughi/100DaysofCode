#include <iostream>

class FileHandler {
private:
    FILE* file;

public:
    FileHandler(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        std::cout << "Opening file" << std::endl;
    }

    // Move constructor
    FileHandler(FileHandler&& other) noexcept : file(other.file) {
        other.file = nullptr;  // Nullify the source pointer
        std::cout << "Moving FileHandler" << std::endl;
    }

    // Move assignment operator
    FileHandler& operator=(FileHandler&& other) noexcept {
        if (this != &other) {
            if (file) {
                fclose(file);  // Close existing file
            }
            file = other.file;
            other.file = nullptr;
            std::cout << "Move-assigning FileHandler" << std::endl;
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
    FileHandler fh2 = std::move(fh1);  // Moves file handler to fh2
}
