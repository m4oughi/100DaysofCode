#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {10, 20, 30, 40};
    std::make_heap(heap.begin(), heap.end(), std::greater<>{});

    std::pop_heap(heap.begin(), heap.end(), std::greater<>{});
    int smallest = heap.back();
    heap.pop_back(); // Remove the smallest element

    std::cout << "Min-Heap after pop_heap: ";
    for (int num : heap) {
        std::cout << num << " ";
    }
    std::cout << "\nSmallest element: " << smallest << "\n";

    return 0;
}
