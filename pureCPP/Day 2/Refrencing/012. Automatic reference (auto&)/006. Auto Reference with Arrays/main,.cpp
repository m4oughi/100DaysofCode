#include <iostream>

int main() {
    int arr[] = {10, 20, 30};

    for (auto& elem : arr) {
        elem += 5;  // Modify each array element
    }

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 15 25 35
    }

    return 0;
}