#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 3, 9, 1, 4, 8};

    size_t n = numbers.size() / 2;
    std::nth_element(numbers.begin(), numbers.begin() + n, numbers.end());

    std::cout << "Median: " << numbers[n] << "\n";
    return 0;
}
