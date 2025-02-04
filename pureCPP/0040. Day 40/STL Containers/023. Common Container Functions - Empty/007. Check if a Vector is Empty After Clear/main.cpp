#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};

    // After clear
    vec.clear();

    // Check if the vector is empty
    if (vec.empty()) {
        std::cout << "Vector is empty after clear." << std::endl;  // Output: Vector is empty after clear.
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    return 0;
}
