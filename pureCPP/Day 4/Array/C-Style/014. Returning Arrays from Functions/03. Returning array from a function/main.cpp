#include <iostream>
#include <array>

std::array<int, 5> createArray() {
    std::array<int, 5> arr = {10, 20, 30, 40, 50};
    return arr;  // Return std::array
}

int main() {
    std::array<int, 5> arr = createArray();  // Get the array from the function

    // Print the array elements
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";  // Outputs: 10 20 30 40 50
    }
    std::cout << std::endl;
}

