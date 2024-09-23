#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0, [](int total, int n) {
        return total + n;
    });

    std::cout << "Sum of all elements: " << sum << std::endl; // Outputs: Sum of all elements: 15

    return 0;
}
