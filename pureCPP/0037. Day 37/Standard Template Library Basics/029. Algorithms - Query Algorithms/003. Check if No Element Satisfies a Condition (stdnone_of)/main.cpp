#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 3, 5, 7};

    bool noEven = std::none_of(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });

    std::cout << "No numbers are even: " << std::boolalpha << noEven << "\n";

    return 0;
}
