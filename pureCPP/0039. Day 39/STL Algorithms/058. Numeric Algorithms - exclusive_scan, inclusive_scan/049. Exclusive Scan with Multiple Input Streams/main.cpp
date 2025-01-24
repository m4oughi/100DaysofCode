#include <iostream>
#include <vector>
#include <numeric>
#include <tuple>

struct CombinedData {
    int sum;
    int product;
};

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    std::vector<CombinedData> exclusive_result(vec1.size());

    std::exclusive_scan(vec1.begin(), vec1.end(), vec2.begin(), exclusive_result.begin(),
        CombinedData{0, 1},
        [&](const CombinedData& acc, int val) -> CombinedData {
            return CombinedData{
                acc.sum + val,
                acc.product * val
            };
        }
    );

    std::cout << "Exclusive Scan with Multiple Input Streams:\n";
    for (const auto& cd : exclusive_result) {
        std::cout << "Sum: " << cd.sum << ", Product: " << cd.product << "\n";
    }
    /*
    Output:
    Sum: 0, Product: 1
    Sum: 1, Product: 4
    Sum: 3, Product: 8
    */

    return 0;
}
