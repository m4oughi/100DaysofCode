#include <iostream>
#include <vector>
#include <cstring>  // For memcpy

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int c_array[5];
    
    // Copy data from vector to C-style array using memcpy
    std::memcpy(c_array, numbers.data(), numbers.size() * sizeof(int));

    // Display the C-style array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << c_array[i] << " ";
    }

    return 0;
}
