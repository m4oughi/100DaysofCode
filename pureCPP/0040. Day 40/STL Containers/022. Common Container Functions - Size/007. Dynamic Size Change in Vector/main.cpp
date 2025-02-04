#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30};

    // Getting the size initially
    std::cout << "Initial size: " << vec.size() << std::endl;  // Output: 3

    // Adding elements to the vector
    vec.push_back(40);
    vec.push_back(50);

    std::cout << "Size after adding elements: " << vec.size() << std::endl;  // Output: 5

    // Removing an element from the vector
    vec.pop_back();

    std::cout << "Size after removing an element: " << vec.size() << std::endl;  // Output: 4

    return 0;
}
