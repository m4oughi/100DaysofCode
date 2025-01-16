#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::reverse(numbers.begin(), numbers.end());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
