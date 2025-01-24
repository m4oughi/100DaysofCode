#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Max-heap
    std::vector<int> maxHeap = {50, 30, 20, 40, 10};
    std::make_heap(maxHeap.begin(), maxHeap.end());
    std::sort_heap(maxHeap.begin(), maxHeap.end());

    std::cout << "Sorted max-heap (ascending): ";
    for (int num : maxHeap) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Min-heap
    std::vector<int> minHeap = {10, 20, 15, 30, 40};
    std::make_heap(minHeap.begin(), minHeap.end(), std::greater<>{});
    std::sort_heap(minHeap.begin(), minHeap.end(), std::greater<>{});

    std::cout << "Sorted min-heap (descending): ";
    for (int num : minHeap) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
