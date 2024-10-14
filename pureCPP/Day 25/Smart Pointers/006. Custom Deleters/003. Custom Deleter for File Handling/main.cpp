#include <iostream>
#include <memory>
#include <cstdio>

void fileDeleter(FILE* file) {
    std::cout << "Custom deleter for file called. Closing file..." << std::endl;
    if (file) {
        fclose(file);  // Close the file when the smart pointer goes out of scope
    }
}

int main() {
    std::shared_ptr<FILE> filePtr(fopen("example.txt", "w"), fileDeleter);  // Custom deleter for files
    if (filePtr) {
        fputs("Hello, World!\n", filePtr.get());
    }

    // The file will be closed automatically using the custom deleter when filePtr goes out of scope
    return 0;
}
