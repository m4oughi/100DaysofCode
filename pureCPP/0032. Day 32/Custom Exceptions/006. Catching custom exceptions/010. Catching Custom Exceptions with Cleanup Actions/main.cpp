#include <iostream>
#include <exception>

class FileError : public std::exception {
public:
    const char* what() const noexcept override {
        return "File operation error!";
    }
};

void performFileOperation() {
    bool fileOpened = true;  // Simulating file open
    try {
        if (!fileOpened) throw FileError();
        // Perform file operations here...
        throw FileError();  // Simulate file error
    } catch (const FileError& e) {
        std::cout << "Caught file error: " << e.what() << std::endl;
    } finally {
        std::cout << "Closing file and cleaning up..." << std::endl;
        // Perform cleanup operations (close file, release memory)
    }
}

int main() {
    try {
        performFileOperation();
    } catch (const std::exception& e) {
        std::cout << "Unhandled exception: " << e.what() << std::endl;
    }
    return 0;
}
