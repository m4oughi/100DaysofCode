#include <iostream>

struct Resource {
    int* data;

    // Constructor
    Resource(int size) {
        data = new int[size];
    }

    // Destructor
    ~Resource() {
        delete[] data;
    }
};

int main() {


    return 0;
}