#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    std::vector<int> set1(1000000);
    std::vector<int> set2(1000000);
    std::vector<int> result;

    // Populate large sorted datasets
    for (int i = 0; i < 1000000; ++i) {
        set1[i] = i * 2;
        set2[i] = i * 3;
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(result));
    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Intersection size: " << result.size() << "\n";
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    return 0;
}
