#include <iostream>
#include <memory>

std::unique_ptr<int[]> createUniqueArray(int size) {
    std::unique_ptr<int[]> arr(new int[size]);
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;  // Initialize array elements
    }
    return arr;  // Return the unique_ptr to the array
}

int main() {
    int size = 6;
    std::unique_ptr<int[]> arr = createUniqueArray(size);  // Get the unique_ptr from the function

    // Print the array elements
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Outputs: 1 2 3 4 5 6
    }
    std::cout << std::endl;
}
