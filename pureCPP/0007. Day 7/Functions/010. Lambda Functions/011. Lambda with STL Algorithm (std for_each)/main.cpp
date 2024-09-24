#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    std::for_each(numbers.begin(), numbers.end(), [](int x) {
        std::cout << x * 2 << " ";  // Print double of each element
    });
    
    std::cout << std::endl;
    return 0;
}
