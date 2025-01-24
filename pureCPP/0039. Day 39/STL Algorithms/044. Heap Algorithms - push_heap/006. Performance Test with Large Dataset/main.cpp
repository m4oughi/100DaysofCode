#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    std::vector<int> heap(1000000);
    for (int i = 0; i < 1000000; ++i) {
        heap[i] = 1000000 - i; // Reverse order elements
    }
    std::make_heap(heap.begin(), heap.end());

    auto start = std::chrono::high_resolution_clock::now();
    heap.push_back(500000); // Add element
    std::push_heap(heap.begin(), heap.end());
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Element pushed into large heap.\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    return 0;
}
