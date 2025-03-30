#include <iostream>
#include <vector>

int main() {
    std::vector<double> numbers = {1.5, 2.5, 3.5};

    for (auto& num : numbers) { // Using 'auto&' to modify elements
        num *= 2;
    }

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
