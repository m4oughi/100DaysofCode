#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 15, 30, 40};
    std::make_heap(vec.begin(), vec.end()); // Create a max-heap
    std::sort_heap(vec.begin(), vec.end()); // Sort the heap

    std::cout << "Sorted elements: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
