#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {50, 30, 20, 10};
    std::make_heap(heap.begin(), heap.end());

    std::cout << "Heap elements in sorted order: ";
    while (!heap.empty()) {
        std::pop_heap(heap.begin(), heap.end());
        std::cout << heap.back() << " ";
        heap.pop_back(); // Remove the largest element
    }
    std::cout << "\n";

    return 0;
}
