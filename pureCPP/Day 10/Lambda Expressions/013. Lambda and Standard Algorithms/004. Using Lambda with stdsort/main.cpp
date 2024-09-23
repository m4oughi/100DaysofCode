#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 3};
    
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b;
    });

    for (int n : numbers) {
        std::cout << n << " ";
    }
    // Outputs: 1 2 3 5 8

    return 0;
}
