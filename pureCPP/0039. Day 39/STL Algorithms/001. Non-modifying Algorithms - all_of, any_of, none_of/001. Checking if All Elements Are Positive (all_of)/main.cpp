#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 5, 7, 10};

    bool allPositive = std::all_of(numbers.begin(), numbers.end(), [](int x) {
        return x > 0;
    });

    std::cout << (allPositive ? "All numbers are positive." : "Not all numbers are positive.") << std::endl;

    return 0;
}
