#include <iostream>

void incrementElements(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] += 1;
    }
}

int main() {
    int numbers[4] = {1, 2, 3, 4};

    // Array name used as a pointer to the first element
    incrementElements(numbers, 4);

    // Print the incremented array
    for (int i = 0; i < 4; ++i) {
        std::cout << numbers[i] << " ";  // Outputs: 2 3 4 5
    }
    std::cout << std::endl;
}
