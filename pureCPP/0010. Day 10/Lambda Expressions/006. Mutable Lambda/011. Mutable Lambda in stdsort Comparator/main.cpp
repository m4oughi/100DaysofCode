#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 4, 3, 2, 5};
    bool ascending = true;

    std::sort(numbers.begin(), numbers.end(), [ascending]() mutable {
        return [=](int a, int b) mutable {
            if (!ascending) std::swap(a, b); // Sort descending if not ascending
            ascending = !ascending; // Toggle sorting order for next comparison
            return a < b;
        };
    }());

    for (int n : numbers) {
        std::cout << n << " ";
    }
    return 0;
}
