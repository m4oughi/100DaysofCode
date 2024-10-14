#include <iostream>
#include <memory>
#include <cstdio>

void fileDeleter(FILE* file) {
    std::cout << "Closing file..." << std::endl;
    if (file) fclose(file);
}

void bufferDeleter(char* buffer) {
    std::cout << "Freeing buffer..." << std::endl;
    free(buffer);
}

int main() {
    // Smart pointer to manage file resource with custom fileDeleter
    std::shared_ptr<FILE> filePtr(fopen("example.txt", "w"), fileDeleter);

    // Smart pointer to manage dynamically allocated buffer with custom bufferDeleter
    std::shared_ptr<char> bufferPtr(static_cast<char*>(malloc(256)), bufferDeleter);

    if (filePtr && bufferPtr) {
        fputs("Hello, world!", filePtr.get());
    }

    // Both resources will be automatically cleaned up using their respective custom deleters
    return 0;
}
