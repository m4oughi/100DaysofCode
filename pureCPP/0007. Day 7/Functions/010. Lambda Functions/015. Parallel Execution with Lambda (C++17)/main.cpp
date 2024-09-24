#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::for_each(std::execution::par, numbers.begin(), numbers.end(), [](int& n) {
        n *= 2;  // Double each element in parallel
    });

    for (const auto& num : numbers)
        std::cout << num << " ";
    std::cout << std::endl;
    return 0;
}
