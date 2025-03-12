#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 3};

    std::sort(numbers.begin(), numbers.end(), [](int a, int b) { return a > b; });

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
