#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {40, 30, 20, 10};
    std::make_heap(heap.begin(), heap.end());

    std::pop_heap(heap.begin(), heap.end());
    int largest = heap.back();
    heap.pop_back(); // Remove the largest element

    std::cout << "Max-Heap after pop_heap: ";
    for (int num : heap) {
        std::cout << num << " ";
    }
    std::cout << "\nLargest element: " << largest << "\n";

    return 0;
}
