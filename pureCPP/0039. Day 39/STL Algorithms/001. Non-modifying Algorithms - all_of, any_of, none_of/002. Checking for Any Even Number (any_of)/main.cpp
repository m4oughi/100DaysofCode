#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    bool hasEven = std::any_of(numbers.begin(), numbers.end(), [](int x) {
        return x % 2 == 0;
    });

    std::cout << (hasEven ? "There is an even number." : "No even numbers found.") << std::endl;

    return 0;
}
