#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {40, 30, 30, 20, 10};
    std::make_heap(heap.begin(), heap.end());

    heap.push_back(30); // Add a duplicate
    std::push_heap(heap.begin(), heap.end());

    std::cout << "Heap with duplicates after push_heap: ";
    for (int num : heap) {
        std::cout << num << " ";
    }

    return 0;
}
