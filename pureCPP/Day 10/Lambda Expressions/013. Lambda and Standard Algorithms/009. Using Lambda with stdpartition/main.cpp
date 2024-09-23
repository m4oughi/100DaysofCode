#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 5, 2, 8, 6, 1};

    std::partition(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    });

    for (int n : numbers) {
        std::cout << n << " ";
    }
    // Outputs: 2 8 6 1 5 3

    return 0;
}
