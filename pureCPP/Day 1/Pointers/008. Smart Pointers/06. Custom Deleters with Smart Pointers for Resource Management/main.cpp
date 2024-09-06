#include <iostream>
#include <memory>
#include <cstdio>

// Custom deleter for FILE*
struct FileDeleter {
    void operator()(FILE* file) const {
        if (file) {
            std::cout << "Closing file." << std::endl;
            fclose(file);
        }
    }
};

int main() {
    // Create a unique_ptr with a custom deleter for managing FILE* resources
    std::unique_ptr<FILE, FileDeleter> file(fopen("example.txt", "w"));

    if (file) {
        std::cout << "File opened successfully." << std::endl;
        fprintf(file.get(), "Hello, world!");
    }

   
