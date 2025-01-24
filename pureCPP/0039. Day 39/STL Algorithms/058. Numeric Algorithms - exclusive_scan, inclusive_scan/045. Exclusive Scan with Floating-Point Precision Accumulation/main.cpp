#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

int main() {
    std::vector<double> numbers = {0.1, 0.2, 0.3, 0.4, 0.5};
    std::vector<double> exclusive_result(numbers.size());

    std::exclusive_scan(numbers.begin(), numbers.end(), exclusive_result.begin(), 0.0,
        std::plus<>());

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Exclusive Scan with Floating-Point Precision: ";
    for (double num : exclusive_result) {
        std::cout << num << " ";
    }
    // Output: 0.00 0.10 0.30 0.60 1.00

    return 0;
}
