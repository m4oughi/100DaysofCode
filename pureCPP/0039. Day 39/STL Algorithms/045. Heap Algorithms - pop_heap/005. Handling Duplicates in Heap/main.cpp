#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {30, 40, 30, 20};
    std::make_heap(heap.begin(), heap.end());

    std::pop_heap(heap.begin(), heap.end());
    int largest = heap.back();
    heap.pop_back(); // Remove the largest element

    std::cout << "Heap after removing duplicate largest element: ";
    for (int num : heap) {
        std::cout << num << " ";
    }
    std::cout << "\nRemoved element: " << largest << "\n";

    return 0;
}
