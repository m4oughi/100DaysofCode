#include <iostream>

class NestedResource {
    int* buffer;
    FILE* file;
public:
    NestedResource(const char* fileName) {
        buffer = new int[100];
        std::cout << "Buffer allocated." << std::endl;

        file = fopen(fileName, "r");
        if (file) {
            std::cout << "File opened." << std::endl;
        }
    }

    ~NestedResource() {
        if (file) {
            fclose(file);
            std::cout << "File closed." << std::endl;
        }
        delete[] buffer;
        std::cout << "Buffer deallocated." << std::endl;
    }

    void performOperations() {
        std::cout << "Performing operations on both buffer and file." << std::endl;
    }
};

int main() {
    {
        NestedResource res("example.txt");
        res.performOperations();
    }
    // Both file and buffer are automatically managed and cleaned up
    return 0;
}
