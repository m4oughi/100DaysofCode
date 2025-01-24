#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {20, 5, 15, 8, 12, 1, 25};

    std::nth_element(numbers.begin(), numbers.begin() + 2, numbers.end());

    std::cout << "3rd smallest element: " << numbers[2] << "\n";
    return 0;
}
