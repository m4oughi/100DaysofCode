#include <iostream>
#include <exception>

class FileOpenException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Failed to open the file!";
    }
};

void openFile() {
    throw FileOpenException();
}

int main() {
    try {
        try {
            openFile();
        } catch (const FileOpenException& e) {
            std::cout << "Caught exception: " << e.what() << std::endl;
            throw;  // Rethrow the exception
        }
    } catch (const FileOpenException& e) {
        std::cout << "Rethrown exception: " << e.what() << std::endl;
    }
    return 0;
}
