#include <iostream>

int main() {
    const volatile int arr[] = {1, 2, 3, 4};

    for (int i : arr) {
        std::cout << i << " "; // Prints 1 2 3 4
    }
}
