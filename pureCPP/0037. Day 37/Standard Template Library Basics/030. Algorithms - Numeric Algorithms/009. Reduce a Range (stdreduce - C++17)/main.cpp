#include <iostream>
#include <vector>
#include <numeric>
#include <execution>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};

    int sum = std::reduce(std::execution::seq, numbers.begin(), numbers.end());
    std::cout << "Sum using reduce: " << sum << "\n";

    return 0;
}
