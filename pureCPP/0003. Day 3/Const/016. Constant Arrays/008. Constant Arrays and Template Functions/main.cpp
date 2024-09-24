#include <iostream>

template <std::size_t N>
void printArray(const int (&arr)[N]) {
    for (std::size_t i = 0; i < N; ++i) {
        std::cout << arr[i] << " "; // Prints elements of the array
    }
    std::cout << std::endl;
}

int main() {
    const int arr[] = {21, 22, 23, 24};
    printArray(arr);
}
