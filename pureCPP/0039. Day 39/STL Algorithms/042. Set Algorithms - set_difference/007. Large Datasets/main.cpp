#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    std::vector<int> set1(1000000);
    std::vector<int> set2(500000);
    std::vector<int> result;

    // Populate large sorted datasets
    for (int i = 0; i < 1000000; ++i) {
        set1[i] = i * 2;
    }
    for (int i = 0; i < 500000; ++i) {
        set2[i] = i * 4;
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Difference size: " << result.size() << "\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
