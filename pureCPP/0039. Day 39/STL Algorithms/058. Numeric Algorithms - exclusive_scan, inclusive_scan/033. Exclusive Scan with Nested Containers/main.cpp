#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

struct VectorData {
    std::vector<int> values;
};

struct CumulativeData {
    std::vector<int> cumulative_values;
};

int main() {
    std::vector<VectorData> data = {
        { {1, 2, 3} },
        { {4, 5} },
        { {6, 7, 8, 9} }
    };
    std::vector<CumulativeData> cumulative_result(data.size());

    std::exclusive_scan(data.begin(), data.end(), cumulative_result.begin(),
        CumulativeData{std::vector<int>()},
        [&](const CumulativeData& acc, const VectorData& current) -> CumulativeData {
            std::vector<int> new_cumulative = acc.cumulative_values;
            new_cumulative.insert(new_cumulative.end(), current.values.begin(), current.values.end());
            return CumulativeData{new_cumulative};
        });

    std::cout << "Exclusive Scan on Nested Containers:\n";
    for (const auto& cr : cumulative_result) {
        std::cout << "{ ";
        for (int val : cr.cumulative_values) {
            std::cout << val << " ";
        }
        std::cout << "} ";
    }
    // Output: { } { 1 2 3 } { 1 2 3 4 5 }

    return 0;
}
