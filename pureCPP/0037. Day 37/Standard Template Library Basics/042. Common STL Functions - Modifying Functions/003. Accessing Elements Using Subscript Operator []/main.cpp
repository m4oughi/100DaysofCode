#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {5, 10, 15, 20};

    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "Element at index " << i << ": " << vec[i] << "\n";
    }

    vec[2] = 50; // Modify using subscript operator
    std::cout << "Modified element at index 2: " << vec[2] << "\n";

    return 0;
}
