#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    
    auto it = std::unique(numbers.begin(), numbers.end());
    numbers.erase(it, numbers.end());

    std::cout << "Unique elements: ";
    for (int num : numbers) std::cout << num << " ";
    return 0;
}
