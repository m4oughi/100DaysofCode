#include <iostream>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Outputs the elements of the array
    }
    std::cout << std::endl;
}

int main() {
    int numbers[4] = {5, 15, 25, 35};

    // Passing the array to the function
    printArray(numbers, 4);  // Outputs: 5 15 25 35
}
