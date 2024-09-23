#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> squares(numbers.size());

    std::transform(numbers.begin(), numbers.end(), squares.begin(), [](int n) {
        return n * n;
    });

    for (int n : squares) {
        std::cout << n << " ";
    }
    // Outputs: 1 4 9 16 25

    return 0;
}
