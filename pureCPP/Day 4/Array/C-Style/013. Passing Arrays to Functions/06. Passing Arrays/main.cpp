#include <array>
#include <vector>
#include <iostream>

void printArray(const std::array<int, 4>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";  // Outputs the elements of the std::array
    }
    std::cout << std::endl;
}

void printVector(const std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";  // Outputs the elements of the std::vector
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 4> arr = {5, 10, 15, 20};
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Pass std::array to the function
    printArray(arr);  // Outputs: 5 10 15 20

    // Pass std::vector to the function
    printVector(vec);  // Outputs: 1 2 3 4 5 6
}
