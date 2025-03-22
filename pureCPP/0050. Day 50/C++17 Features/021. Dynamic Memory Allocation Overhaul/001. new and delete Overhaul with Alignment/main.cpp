#include <iostream>
#include <new> // Required for aligned allocation

struct alignas(32) AlignedData {
    int data[8];
};

int main() {
    AlignedData* ptr = new AlignedData; // Automatic 32-byte alignment
    std::cout << "AlignedData allocated at: " << ptr << std::endl;
    delete ptr;
    return 0;
}
