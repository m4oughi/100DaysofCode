#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 3, 8, 1, 2};
    
    std::ranges::sort(numbers);  // Sort using ranges
    
    for (int num : numbers)
        std::cout << num << " ";
    
    return 0;
}
