#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {20, 5, 30, 1, 15};
    std::sort(numbers.begin(), numbers.end());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
