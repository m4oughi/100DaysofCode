#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    std::vector<int> superset(1000000);
    std::vector<int> subset = {500, 1000, 1500};

    // Fill the superset with sorted data
    for (int i = 0; i < 1000000; ++i) {
        superset[i] = i;
    }

    auto start = std::chrono::high_resolution_clock::now();

    if (std::includes(superset.begin(), superset.end(), subset.begin(), subset.end())) {
        std::cout << "Subset is included in the superset.\n";
    } else {
        std::cout << "Subset is not included in the superset.\n";
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time taken: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " microseconds\n";

    return 0;
}
