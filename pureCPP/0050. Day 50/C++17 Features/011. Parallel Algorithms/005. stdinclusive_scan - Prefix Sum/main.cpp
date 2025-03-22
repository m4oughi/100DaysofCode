#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    std::vector<int> results(data.size());

    std::inclusive_scan(std::execution::par, data.begin(), data.end(),
                        results.begin());

    std::cout << "Inclusive scan result: ";
    for (int num : results) {
        std::cout << num << " ";
    }

    return 0;
}
