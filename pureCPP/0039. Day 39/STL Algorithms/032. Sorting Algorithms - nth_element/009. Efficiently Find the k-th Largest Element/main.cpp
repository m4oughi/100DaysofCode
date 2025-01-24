#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> numbers(1000);
    std::iota(numbers.begin(), numbers.end(), 1); // Fill with 1 to 1000

    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(numbers.begin(), numbers.end(), gen); // Shuffle numbers

    size_t k = 5;
    std::nth_element(numbers.begin(), numbers.begin() + k - 1, numbers.end(), std::greater<int>());

    std::cout << "5th largest element: " << numbers[k - 1] << "\n";
    return 0;
}
