#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << "Sum of elements: " << sum << "\n";

    return 0;
}
