#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {7, 3, 9, 1, 4, 8};

    std::nth_element(numbers.begin(), numbers.end() - 1, numbers.end());

    std::cout << "Largest element: " << numbers.back() << "\n";
    return 0;
}
