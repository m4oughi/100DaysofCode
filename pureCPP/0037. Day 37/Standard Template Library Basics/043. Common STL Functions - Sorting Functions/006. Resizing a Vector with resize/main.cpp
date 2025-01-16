#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};

    vec.resize(5, 100); // Resize to 5 elements, new elements initialized to 100
    std::cout << "After resize: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    vec.resize(2); // Shrink to 2 elements
    std::cout << "After shrinking: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
