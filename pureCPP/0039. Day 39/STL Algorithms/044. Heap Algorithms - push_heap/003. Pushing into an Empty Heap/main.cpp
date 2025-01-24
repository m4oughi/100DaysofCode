#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap;

    heap.push_back(20);
    std::push_heap(heap.begin(), heap.end());

    heap.push_back(30);
    std::push_heap(heap.begin(), heap.end());

    heap.push_back(10);
    std::push_heap(heap.begin(), heap.end());

    std::cout << "Heap after multiple push_heap calls: ";
    for (int num : heap) {
        std::cout << num << " ";
    }

    return 0;
}
