#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>

int main() {
    std::map<int, int> orderedMap;
    std::unordered_map<int, int> unorderedMap;
    int n = 100000;

    auto start1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        orderedMap[i] = i * 2;
    }
    auto end1 = std::chrono::high_resolution_clock::now();

    auto start2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++) {
        unorderedMap[i] = i * 2;
    }
    auto end2 = std::chrono::high_resolution_clock::now();

    std::cout << "Ordered Map Insertion Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1).count()
              << " ms\n";
    std::cout << "Unordered Map Insertion Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2).count()
              << " ms\n";

    return 0;
}
