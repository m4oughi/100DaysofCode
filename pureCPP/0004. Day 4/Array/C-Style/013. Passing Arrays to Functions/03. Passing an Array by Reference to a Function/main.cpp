#include <iostream>

void modifyArray(int (&arr)[4]) {
    for (int i = 0; i < 4; ++i) {
        arr[i] *= 2;  // Modify the original array
    }
}

int main() {
    int numbers[4] = {2, 4, 6, 8};

    // Pass the array by reference
    modifyArray(numbers);

    // Print the modified array
    for (int i = 0; i < 4; ++i) {
        std::cout << numbers[i] << " ";  // Outputs: 4 8 12 16
    }
    std::cout << std::endl;
}
