#include <iostream>

struct FileHandle {
    FILE* file;

    // Constructor
    FileHandle(const char* filename) {
        file = fopen(filename, "r");
    }

    // Destructor
    ~FileHandle() {
        if (file) {
            fclose(file);
        }
    }
};


int main() {


    return 0;
}