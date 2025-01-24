#include <iostream>
#include <vector>
#include <numeric>
#include <tuple>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};
    std::vector<std::tuple<int, int>> result(vec1.size());

    std::exclusive_scan(vec1.begin(), vec1.end(), vec2.begin(), result.begin(),
        std::make_tuple(0, 0),
        [&](const std::tuple<int, int>& acc, int a) -> std::tuple<int, int> {
            return std::make_tuple(std::get<0>(acc) + a, std::get<1>(acc) + a * 2);
        }
    );

    std::cout << "Exclusive Scan with Multiple Ranges:\n";
    for (const auto& tup : result) {
        std::cout << "(" << std::get<0>(tup) << ", " << std::get<1>(tup) << ") ";
    }
    // Output: (0, 0) (1, 2) (3, 6)

    return 0;
}
