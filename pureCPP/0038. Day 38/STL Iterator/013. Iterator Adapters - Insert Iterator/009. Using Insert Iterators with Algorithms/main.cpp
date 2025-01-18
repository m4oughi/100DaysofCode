#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 3, 4};
    std::vector<int> result;

    std::unique_copy(numbers.begin(), numbers.end(), std::back_insert_iterator<std::vector<int>>(result));

    std::cout << "Result after unique_copy: ";
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
