#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 5, 2, 8, 6, 1};

    std::stable_partition(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    });

    for (int n : numbers) {
        std::cout << n << " ";
    }
    // Outputs: 2 8 6 3 5 1

    return 0;
}
