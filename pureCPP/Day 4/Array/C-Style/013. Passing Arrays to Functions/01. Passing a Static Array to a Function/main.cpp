#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Outputs the elements of the array
    }
    std::cout << std::endl;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Pass the array to the function
    printArray(numbers, 5);  // Outputs: 1 2 3 4 5
}
