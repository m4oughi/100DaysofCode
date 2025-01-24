#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Max-heap
    std::vector<int> maxHeap = {50, 30, 20, 10, 5};
    if (std::is_heap(maxHeap.begin(), maxHeap.end())) {
        std::cout << "Max-heap is valid.\n";
    } else {
        std::cout << "Max-heap is invalid.\n";
    }

    // Min-heap
    std::vector<int> minHeap = {5, 10, 20, 30, 50};
    if (std::is_heap(minHeap.begin(), minHeap.end(), std::greater<>{})) {
        std::cout << "Min-heap is valid.\n";
    } else {
        std::cout << "Min-heap is invalid.\n";
    }

    return 0;
}
