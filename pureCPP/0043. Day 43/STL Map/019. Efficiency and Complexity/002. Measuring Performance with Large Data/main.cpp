#include <iostream>
#include <map>
#include <chrono>

int main() {
    std::map<int, int> largeMap;
    const int SIZE = 1000000;

    auto start = std::chrono::high_resolution_clock::now();
    
    // Insert 1 million elements
    for (int i = 0; i < SIZE; i++) {
        largeMap[i] = i;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Insertion Time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    // Measure lookup time
    start = std::chrono::high_resolution_clock::now();
    largeMap.find(SIZE / 2); // Search middle element
    end = std::chrono::high_resolution_clock::now();

    std::cout << "Lookup Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() 
              << " ns\n";

    return 0;
}
