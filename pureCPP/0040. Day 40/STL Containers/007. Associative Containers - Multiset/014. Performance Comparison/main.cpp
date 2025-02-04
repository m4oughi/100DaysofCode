#include <iostream>
#include <set>
#include <chrono>

int main() {
    std::multiset<int> ms;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100000; ++i) {
        ms.insert(i % 100); // Insert duplicates
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Insertion Time: "
              << std::chrono::duration_cast<std::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
