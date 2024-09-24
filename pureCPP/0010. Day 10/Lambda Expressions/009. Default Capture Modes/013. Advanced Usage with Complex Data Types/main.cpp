#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 5, 1, 4, 2};
    int threshold = 3;

    std::for_each(numbers.begin(), numbers.end(), [=, &threshold](int& n) {
        if (n > threshold) {
            n = threshold;
        }
    });

    for (int n : numbers) {
        std::cout << n << " "; // Outputs: 3 3 1 3 2
    }
    std::cout << std::endl;
    return 0;
}
