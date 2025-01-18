#include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> numbers = {1, 2, 3, 4, 5};
    std::forward_list<int> results;

    results.resize(std::distance(numbers.begin(), numbers.end())); // Resize to match input size

    std::transform(numbers.begin(), numbers.end(), results.begin(), [](int x) { return x * x; });

    for (const auto& num : results) {
        std::cout << num << " ";
    }

    return 0;
}
