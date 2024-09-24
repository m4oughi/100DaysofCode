#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    int* basePtr = arr.data();
    int* endPtr = basePtr + arr.size();

    std::cout << "Pointer arithmetic with std::array:" << std::endl;
    for (int* ptr = basePtr; ptr != endPtr; ++ptr) {
        std::cout << "Element: " << *ptr << ", Address: " << ptr << std::endl;
    }

    return 0;
}