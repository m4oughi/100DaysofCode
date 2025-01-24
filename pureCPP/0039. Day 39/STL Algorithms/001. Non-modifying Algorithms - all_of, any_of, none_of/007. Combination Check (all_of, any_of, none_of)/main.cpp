#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    bool allEven = std::all_of(numbers.begin(), numbers.end(), [](int x) {
        return x % 2 == 0;
    });

    bool anyOdd = std::any_of(numbers.begin(), numbers.end(), [](int x) {
        return x % 2 != 0;
    });

    bool noneNegative = std::none_of(numbers.begin(), numbers.end(), [](int x) {
        return x < 0;
    });

    std::cout << (allEven ? "All numbers are even." : "Not all numbers are even.") << std::endl;
    std::cout << (anyOdd ? "There is an odd number." : "No odd numbers found.") << std::endl;
    std::cout << (noneNegative ? "No negative numbers." : "There are negative numbers.") << std::endl;

    return 0;
}
