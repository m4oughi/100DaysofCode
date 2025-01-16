#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30};

    bool allPositive = std::all_of(numbers.begin(), numbers.end(), [](int n) { return n > 0; });
    bool anyAbove25 = std::any_of(numbers.begin(), numbers.end(), [](int n) { return n > 25; });
    bool noneNegative = std::none_of(numbers.begin(), numbers.end(), [](int n) { return n < 0; });

    std::cout << "All positive: " << allPositive << "\nAny above 25: " << anyAbove25 << "\nNone negative: " << noneNegative << std::endl;
    return 0;
}
