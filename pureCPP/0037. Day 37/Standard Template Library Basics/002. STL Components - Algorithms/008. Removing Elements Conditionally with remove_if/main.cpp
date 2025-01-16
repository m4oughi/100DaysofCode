#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
    auto it = std::remove_if(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    numbers.erase(it, numbers.end());

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
