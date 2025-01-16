#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5};

    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end()); // Remove duplicates

    std::cout << "After unique: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
