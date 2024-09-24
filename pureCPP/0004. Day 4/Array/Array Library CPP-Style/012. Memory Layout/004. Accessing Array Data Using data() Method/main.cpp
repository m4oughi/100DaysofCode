#include <iostream>
#include <array>

int main() {
    std::array<int, 3> arr = {5, 10, 15};
    int* dataPtr = arr.data();
    std::cout << "Array data pointer: " << dataPtr << std::endl;

    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << "Element " << i << " using data(): " << *(dataPtr + i) << std::endl;
    }

    return 0;
}