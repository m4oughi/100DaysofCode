#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    int new_value = 30;

    if (!std::binary_search(numbers.begin(), numbers.end(), new_value)) {
        numbers.insert(std::upper_bound(numbers.begin(), numbers.end(), new_value), new_value);
        std::cout << new_value << " inserted into the vector.\n";
    } else {
        std::cout << new_value << " already exists in the vector.\n";
    }

    return 0;
}
