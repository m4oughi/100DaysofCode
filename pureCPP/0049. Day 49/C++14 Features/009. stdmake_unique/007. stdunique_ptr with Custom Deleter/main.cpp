#include <iostream>
#include <memory>

struct FileCloser {
    void operator()(FILE* file) {
        if (file) {
            fclose(file);
            std::cout << "File closed.\n";
        }
    }
};

int main() {
    std::unique_ptr<FILE, FileCloser> filePtr(fopen("test.txt", "w"));
    
    if (filePtr) {
        std::cout << "File opened successfully.\n";
    }

    return 0;
}
