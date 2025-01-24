#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 50, 60};
    std::vector<int> new_elements = {25, 35, 45};

    for (int elem : new_elements) {
        auto pos = std::lower_bound(numbers.begin(), numbers.end(), elem);
        numbers.insert(pos, elem);
    }

    std::cout << "Updated list: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";
    return 0;
}
