#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 5};

    auto it = std::remove(vec.begin(), vec.end(), 2);
    vec.erase(it, vec.end()); // Erase unwanted elements

    std::cout << "After removing 2: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
