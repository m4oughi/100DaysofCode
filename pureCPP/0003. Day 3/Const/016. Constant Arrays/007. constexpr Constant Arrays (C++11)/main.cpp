#include <iostream>

constexpr int getSize() {
    return 4;
}

int main() {
    constexpr int arr[getSize()] = {11, 12, 13, 14};

    for (int i : arr) {
        std::cout << i << " "; // Prints 11 12 13 14
    }
}
