#include <iostream>
#include <vector>

std::vector<int> createVector(int size) {
    std::vector<int> vec(size);
    for (int i = 0; i < size; ++i) {
        vec[i] = i * 5;  // Initialize vector elements
    }
    return vec;  // Return std::vector
}

int main() {
    std::vector<int> vec = createVector(6);  // Get the vector from the function

    // Print the vector elements
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";  // Outputs: 0 5 10 15 20 25
    }
    std::cout << std::endl;
}
