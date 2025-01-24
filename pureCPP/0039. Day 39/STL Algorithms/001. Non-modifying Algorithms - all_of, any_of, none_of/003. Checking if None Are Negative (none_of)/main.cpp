#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {4, 0, 15, 8};

    bool noneNegative = std::none_of(numbers.begin(), numbers.end(), [](int x) {
        return x < 0;
    });

    std::cout << (noneNegative ? "No negative numbers." : "There are negative numbers.") << std::endl;

    return 0;
}
