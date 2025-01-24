#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 50, 30, 20, 40};

    if (!std::is_heap(vec.begin(), vec.end())) {
        std::cout << "Range is not a heap. Converting to a heap...\n";
        std::make_heap(vec.begin(), vec.end());
    }

    std::cout << "Heapified range: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
