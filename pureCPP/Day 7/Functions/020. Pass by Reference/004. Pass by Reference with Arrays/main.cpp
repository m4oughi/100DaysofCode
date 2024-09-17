#include <iostream>

void updateArray(int arr[], int size) {
    arr[0] = 100;  // Modifies the original array
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    updateArray(numbers, 5);
    std::cout << "First element after update: " << numbers[0] << std::endl;  // Original array is changed
    return 0;
}
