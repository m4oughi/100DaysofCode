#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 5, 7};

    bool hasEven = std::any_of(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });

    std::cout << "At least one number is even: " << std::boolalpha << hasEven << "\n";

    return 0;
}
