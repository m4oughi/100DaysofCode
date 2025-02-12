#include <iostream>
#include <map>
#include <chrono>

int main() {
    std::map<int, int> rbTree;
    int n = 100000;

    // Insert n elements
    auto startInsert = std::chrono::high_resolution_clock::now();
    for (int i = 1; i <= n; i++) {
        rbTree[i] = i * 10;
    }
    auto endInsert = std::chrono::high_resolution_clock::now();

    // Search for an element
    auto startSearch = std::chrono::high_resolution_clock::now();
    int value = rbTree[50000];  // Lookup operation
    auto endSearch = std::chrono::high_resolution_clock::now();

    std::cout << "Insertion Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(endInsert - startInsert).count()
              << " ms\n";
    std::cout << "Search Time: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(endSearch - startSearch).count()
              << " ns\n";

    return 0;
}
