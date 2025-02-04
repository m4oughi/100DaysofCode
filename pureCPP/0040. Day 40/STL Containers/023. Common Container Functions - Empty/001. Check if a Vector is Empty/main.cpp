#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Check if the vector is empty
    if (vec.empty()) {
        std::cout << "Vector is empty." << std::endl;  // Output: Vector is empty.
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    return 0;
}
