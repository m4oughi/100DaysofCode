#include <iostream>

// Overloaded functions with array and pointer parameters
void processArray(int arr[], int size) {
    std::cout << "Processing array of size: " << size << std::endl;
}

void processArray(int* arr, int size) {
    std::cout << "Processing pointer array of size: " << size << std::endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    processArray(arr, 5);   // Calls array version
    processArray(&arr[0], 5);  // Calls pointer version
    return 0;
}
