#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {2, 4, 6, 8};

    bool allEven = std::all_of(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });

    std::cout << "All numbers are even: " << std::boolalpha << allEven << "\n";

    return 0;
}
