#include <iostream>

int main() {
    const int arr[] = {10, 20, 30};
    const int* ptr = arr;

    for (int i = 0; i < 3; ++i) {
        std::cout << *(ptr + i) << " "; // Prints 10 20 30
    }
}
