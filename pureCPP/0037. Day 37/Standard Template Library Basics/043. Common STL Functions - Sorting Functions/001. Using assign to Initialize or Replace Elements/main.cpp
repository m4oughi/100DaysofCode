#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // Assign multiple elements
    vec.assign(5, 10); // Fills vector with 5 elements, each 10
    std::cout << "After assign(5, 10): ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    // Assign from an initializer list
    vec.assign({1, 2, 3, 4, 5});
    std::cout << "After assign({1, 2, 3, 4, 5}): ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
