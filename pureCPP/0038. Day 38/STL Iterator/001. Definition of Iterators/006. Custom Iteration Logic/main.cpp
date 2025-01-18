#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50, 60};

    for (auto it = numbers.begin(); it < numbers.end(); it += 2) { // Skip one element
        std::cout << *it << " ";
    }
    return 0;
}
