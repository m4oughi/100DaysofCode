#include <iostream>

int main() {
    int arr[]{1, 2, 3, 4, 5}; // Uniform initialization

    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
