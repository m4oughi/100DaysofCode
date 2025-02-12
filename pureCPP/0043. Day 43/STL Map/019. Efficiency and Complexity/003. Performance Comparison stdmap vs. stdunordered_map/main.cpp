#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>

int main() {
    const int SIZE = 1000000;
    std::map<int, int> orderedMap;
    std::unordered_map<int, int> unorderedMap;

    // Measure std::map insertion time
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < SIZE; i++) {
        orderedMap[i] = i;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "std::map Insertion Time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    // Measure std::unordered_map insertion time
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < SIZE; i++) {
        unorderedMap[i] = i;
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "std::unordered_map Insertion Time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    return 0;
}
