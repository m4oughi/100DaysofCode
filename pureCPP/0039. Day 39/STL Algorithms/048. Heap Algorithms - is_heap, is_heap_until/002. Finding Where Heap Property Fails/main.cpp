#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {40, 30, 20, 10, 25};

    auto it = std::is_heap_until(vec.begin(), vec.end());
    std::cout << "Heap property holds up to index: " 
              << std::distance(vec.begin(), it) << "\n";

    return 0;
}
