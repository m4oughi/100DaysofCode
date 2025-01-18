#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int sum = std::accumulate(numbers.cbegin(), numbers.cend(), 0);

    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}
