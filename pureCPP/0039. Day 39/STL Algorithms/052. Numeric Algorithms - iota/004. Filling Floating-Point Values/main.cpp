#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> values(5);
    std::iota(values.begin(), values.end(), 1.5);

    std::cout << "Floating-point sequence: ";
    for (double val : values) {
        std::cout << val << " ";
    }
    std::cout << "\n"; // Output: 1.5 2.5 3.5 4.5 5.5

    return 0;
}
