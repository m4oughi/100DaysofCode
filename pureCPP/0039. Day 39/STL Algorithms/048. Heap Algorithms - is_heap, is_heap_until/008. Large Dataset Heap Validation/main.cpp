#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    std::vector<int> vec(1000000);
    for (int i = 0; i < 1000000; ++i) {
        vec[i] = rand() % 1000000;
    }

    std::make_heap(vec.begin(), vec.end());

    auto start = std::chrono::high_resolution_clock::now();
    bool isHeap = std::is_heap(vec.begin(), vec.end());
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Heap validation: " 
              << (isHeap ? "Valid heap." : "Invalid heap.") << "\n";
    std::cout << "Time taken: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    return 0;
}
