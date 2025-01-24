#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {40, 30, 20, 10, 25, 15, 5};

    auto it = std::is_heap_until(vec.begin(), vec.end());
    std::cout << "Heap property valid up to index: " 
              << std::distance(vec.begin(), it) << "\n";

    std::cout << "Partial heap: ";
    for (auto i = vec.begin(); i != it; ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    return 0;
}
