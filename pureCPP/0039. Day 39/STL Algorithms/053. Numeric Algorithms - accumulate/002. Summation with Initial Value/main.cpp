#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = std::accumulate(numbers.begin(), numbers.end(), 10);

    std::cout << "Sum with initial value: " << sum << "\n"; // Output: 25
    return 0;
}
