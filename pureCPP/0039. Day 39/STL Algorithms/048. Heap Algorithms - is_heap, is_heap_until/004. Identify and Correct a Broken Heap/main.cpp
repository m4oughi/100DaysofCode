#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {40, 30, 20, 25, 10};

    auto it = std::is_heap_until(vec.begin(), vec.end());
    if (it != vec.end()) {
        std::cout << "Heap property fails at index: " 
                  << std::distance(vec.begin(), it) << "\n";
    }

    std::make_heap(vec.begin(), vec.end());
    std::cout << "Heap corrected: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
