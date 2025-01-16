#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 4, 6, 8, 10};

    bool allEven = std::all_of(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    bool anyOdd = std::any_of(vec.begin(), vec.end(), [](int x) { return x % 2 != 0; });
    bool noneNegative = std::none_of(vec.begin(), vec.end(), [](int x) { return x < 0; });

    std::cout << "All elements are even: " << (allEven ? "true" : "false") << "\n";
    std::cout << "Any element is odd: " << (anyOdd ? "true" : "false") << "\n";
    std::cout << "No element is negative: " << (noneNegative ? "true" : "false") << "\n";

    return 0;
}
