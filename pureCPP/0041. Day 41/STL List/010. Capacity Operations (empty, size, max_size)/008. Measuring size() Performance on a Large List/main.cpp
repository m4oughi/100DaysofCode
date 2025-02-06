#include <iostream>
#include <list>
#include <chrono>

int main() {
    std::list<int> largeList;
    for (int i = 0; i < 1000000; ++i) {
        largeList.push_back(i);
    }

    auto start = std::chrono::high_resolution_clock::now();
    size_t listSize = largeList.size();  // `size()` operation
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Size of large list: " << listSize << std::endl;
    std::cout << "Time taken for size() call: " 
              << std::chrono::duration_cast<std::nanoseconds>(end - start).count() 
              << " nanoseconds\n";

    return 0;
}
