#include <iostream>
#include <vector>
#include <numeric>

struct Accumulators {
    int sum;
    int product;
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<Accumulators> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(),
                       Accumulators{0, 1},
                       [&](const Accumulators& acc, int val) -> Accumulators {
                           return Accumulators{
                               acc.sum + val,
                               acc.product * val
                           };
                       });

    std::cout << "Exclusive Scan with Multiple Accumulators:\n";
    for (const auto& acc : exclusive_result) {
        std::cout << "Sum: " << acc.sum << ", Product: " << acc.product << "\n";
    }
    /*
    Output:
    Sum: 0, Product: 1
    Sum: 1, Product: 1
    Sum: 3, Product: 2
    Sum: 6, Product: 6
    */

    return 0;
}
