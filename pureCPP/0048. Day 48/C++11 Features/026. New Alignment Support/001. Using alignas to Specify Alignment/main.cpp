#include <iostream>
#include <cstddef>

struct alignas(16) AlignedStruct {
    int data[4];
};

int main() {
    std::cout << "Alignment of AlignedStruct: " << alignof(AlignedStruct) << '\n';
    return 0;
}
