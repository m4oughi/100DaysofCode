#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 2, 4, 8, 5, 3, 1, 6};

    std::nth_element(numbers.begin(), numbers.begin() + 3, numbers.end(), [](int a, int b) {
        return a < b;
    });

    std::cout << "4th smallest element: " << numbers[3] << std::endl; // Outputs: 4th smallest element: 4

    return 0;
}
