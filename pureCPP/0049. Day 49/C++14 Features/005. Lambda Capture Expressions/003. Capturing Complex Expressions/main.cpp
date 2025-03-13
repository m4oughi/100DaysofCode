#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int multiplier = 2;

    auto lambda = [vec = std::move(numbers), factor = multiplier]() {
        for (auto num : vec) {
            std::cout << num * factor << " ";
        }
        std::cout << std::endl;
    };

    lambda(); // Output: 2 4 6 8 10
    // numbers is now empty

    return 0;
}
