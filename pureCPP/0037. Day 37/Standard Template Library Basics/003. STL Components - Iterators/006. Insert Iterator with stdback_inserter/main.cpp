#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<int> result;

    std::copy(numbers.begin(), numbers.end(), std::back_inserter(result));

    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
