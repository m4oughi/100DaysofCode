#include <iostream>
#include <vector>

int main() {
    auto accumulator = [sum = std::vector<int>{}]() mutable {
        sum.push_back(sum.size() + 1); // Adds element equal to the new size
        int total = 0;
        for (int n : sum) {
            total += n;
        }
        return total; // Returns the sum of all elements in 'sum'
    };

    std::cout << "Total: " << accumulator() << std::endl; // Outputs: Total: 1
    std::cout << "Total: " << accumulator() << std::endl; // Outputs: Total: 3
    std::cout << "Total: " << accumulator() << std::endl; // Outputs: Total: 6
    return 0;
}
