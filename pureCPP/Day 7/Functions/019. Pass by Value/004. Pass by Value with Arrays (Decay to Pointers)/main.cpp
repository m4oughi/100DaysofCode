#include <iostream>

void modifyArray(int arr[], int size) {
    arr[0] = 100;  // Array decays to pointer, modifying the original array
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    modifyArray(numbers, 5);
    std::cout << "First element after modification: " << numbers[0] << std::endl;  // Array is modified
    return 0;
}
