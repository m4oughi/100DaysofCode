#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>

int main() {
    const int SIZE = 1000000;
    std::multimap<int, int> orderedMultiMap;
    std::unordered_multimap<int, int> unorderedMultiMap;

    // Measure std::multimap insertion time
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < SIZE; i++) {
        orderedMultiMap.insert({i % 1000, i});
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "std::multimap Insertion Time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    // Measure std::unordered_multimap insertion time
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < SIZE; i++) {
        unorderedMultiMap.insert({i % 1000, i});
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "std::unordered_multimap Insertion Time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    return 0;
}
