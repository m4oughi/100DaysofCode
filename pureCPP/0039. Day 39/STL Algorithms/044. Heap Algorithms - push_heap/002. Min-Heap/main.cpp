#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {30, 20, 15, 40, 50};
    std::make_heap(heap.begin(), heap.end(), std::greater<>{});

    heap.push_back(10); // Add element to the heap
    std::push_heap(heap.begin(), heap.end(), std::greater<>{});

    std::cout << "Min-Heap after push_heap: ";
    for (int num : heap) {
        std::cout << num << " ";
    }

    return 0;
}
