#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> data = {1, 2, 2, 3, 3, 3};
    std::vector<int> histogram(data.size());

    std::inclusive_scan(data.begin(), data.end(), histogram.begin(),
        [&](int acc, int current) -> int {
            return acc + 1;
        });

    std::cout << "Inclusive Scan for Histogram Counts: ";
    for (int count : histogram) {
        std::cout << count << " ";
    }
    // Output: 1 2 3 4 5 6

    return 0;
}
