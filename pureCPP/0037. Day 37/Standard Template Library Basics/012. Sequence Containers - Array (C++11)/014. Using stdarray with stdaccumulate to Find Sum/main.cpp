#include <iostream>
#include <array>
#include <numeric>

int main() {
    std::array<int, 5> numbers = {1, 2, 3, 4, 5};

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    std::cout << "Sum: " << sum << "\n";
    return 0;
}
