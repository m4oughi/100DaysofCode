#include <iostream>
#include <memory>

struct FileCloser {
    void operator()(FILE* file) const {
        if (file) {
            fclose(file);
            std::cout << "File closed by custom deleter." << std::endl;
        }
    }
};

int main() {
    {
        std::unique_ptr<FILE, FileCloser> file(fopen("example.txt", "w"));
        if (file) {
            std::fputs("Writing with RAII and custom deleter.", file.get());
        }
        // File is deterministically closed by the custom deleter when `file` goes out of scope.
    }
}
