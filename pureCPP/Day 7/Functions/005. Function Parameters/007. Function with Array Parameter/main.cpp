#include <iostream>

// Function declaration with array parameter
void printArray(int arr[], int size);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);  // Function call with array
    return 0;
}

// Function definition with array parameter
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
