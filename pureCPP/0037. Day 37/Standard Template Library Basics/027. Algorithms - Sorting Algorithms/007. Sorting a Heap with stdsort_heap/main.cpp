#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> heap = {10, 7, 8, 3, 4};
    std::make_heap(heap.begin(), heap.end());

    std::sort_heap(heap.begin(), heap.end());

    std::cout << "Sorted heap: ";
    for (int num : heap) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
