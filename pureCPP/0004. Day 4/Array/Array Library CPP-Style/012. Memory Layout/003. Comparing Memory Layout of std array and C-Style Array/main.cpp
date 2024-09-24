#include <iostream>
#include <array>

int main() {
    std::array<int, 3> stdArr = {1, 2, 3};
    int cArr[3] = {1, 2, 3};

    std::cout << "Memory layout of std::array:" << std::endl;
    for (size_t i = 0; i < stdArr.size(); ++i) {
        std::cout << "stdArr[" << i << "] address: " << &stdArr[i] << std::endl;
    }

    std::cout << "\nMemory layout of C-style array:" << std::endl;
    for (size_t i = 0; i < 3; ++i) {
        std::cout << "cArr[" << i << "] address: " << &cArr[i] << std::endl;
    }
    return 0;
}