#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> transactions{100, -50, 200, -30};
    std::vector<int> result(transactions.size());

    std::transform_inclusive_scan(transactions.begin(), transactions.end(), result.begin(), std::plus<>(), [](int t) {
        return t;
    });

    std::cout << "Running balance: ";
    for (int n : result) std::cout << n << " ";
    // Output: 100 50 250 220
}
