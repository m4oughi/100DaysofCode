#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Before clear, size: " << vec.size() << std::endl;

    // Clear the vector
    vec.clear();

    std::cout << "After clear, size: " << vec.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
