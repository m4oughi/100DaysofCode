#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> results;

    std::transform(numbers.begin(), numbers.end(), std::back_inserter(results), [](int x) {
        return x * 2;
    });

    std::cout << "Using increment in transform: ";
    for (auto it = results.begin(); it != results.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
