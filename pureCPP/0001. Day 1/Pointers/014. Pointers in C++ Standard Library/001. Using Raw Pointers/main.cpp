#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    int* ptr = vec.data();  // Get raw pointer to the first element of the vector

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << *(ptr + i) << " ";  // Access vector elements using pointer arithmetic
    }
    // Output: 1 2 3 4 5

    return 0;
}
