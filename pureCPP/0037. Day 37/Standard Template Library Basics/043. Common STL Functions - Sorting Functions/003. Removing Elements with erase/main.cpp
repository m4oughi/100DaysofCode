#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    vec.erase(vec.begin() + 2); // Remove element at index 2
    std::cout << "After erase: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    // Remove a range of elements
    vec.erase(vec.begin(), vec.begin() + 2);
    std::cout << "After range erase: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
