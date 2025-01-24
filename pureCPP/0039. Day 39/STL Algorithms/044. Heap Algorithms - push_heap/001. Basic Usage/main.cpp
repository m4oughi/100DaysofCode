#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {10, 20, 30, 5, 15};
    std::make_heap(heap.begin(), heap.end());

    heap.push_back(25); // Add element to the heap
    std::push_heap(heap.begin(), heap.end());

    std::cout << "Heap after push_heap: ";
    for (int num : heap) {
        std::cout << num << " ";
    }

    return 0;
}
