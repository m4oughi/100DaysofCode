#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    std::vector<int> squares(numbers.size());

    std::transform(numbers.begin(), numbers.end(), squares.begin(), [](int x) { return x * x; });

    std::cout << "Squared values: ";
    for (const auto& square : squares) {
        std::cout << square << " ";
    }

    return 0;
}
