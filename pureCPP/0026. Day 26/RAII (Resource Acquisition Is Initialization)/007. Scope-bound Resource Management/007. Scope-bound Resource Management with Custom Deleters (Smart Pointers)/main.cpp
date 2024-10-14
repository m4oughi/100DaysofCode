#include <iostream>
#include <memory>

struct FileDeleter {
    void operator()(std::FILE* file) const {
        if (file) {
            std::fclose(file);
            std::cout << "File closed by custom deleter." << std::endl;
        }
    }
};

int main() {
    {
        std::unique_ptr<std::FILE, FileDeleter> filePtr(std::fopen("example.txt", "w"));
        if (filePtr) {
            std::fputs("Hello, custom deleter with RAII", filePtr.get());
        }
    }  // File is automatically closed by the custom deleter when going out of scope.
}
