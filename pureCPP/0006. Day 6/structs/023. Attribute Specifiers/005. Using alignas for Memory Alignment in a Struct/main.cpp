#include <iostream>

struct alignas(16) AlignedData {
    int value;
};

int main() {
    AlignedData d;
    std::cout << "Memory address of d: " << &d << std::endl;

    return 0;
}
