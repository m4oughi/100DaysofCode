#include <iostream>

void printArray(const int arr[], std::size_t size) {
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " "; // Prints elements of the array
    }
    std::cout << std::endl;
}

int main() {
    const int arr[] = {5, 10, 15, 20};
    printArray(arr, 4);
}
