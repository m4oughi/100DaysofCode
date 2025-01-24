#include <iostream>
#include <vector>
#include <algorithm>

bool isAlternating(int a, int b) {
    return (a % 2) == (b % 2); // Check if both numbers are odd or even
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    auto it = std::adjacent_find(vec.begin(), vec.end(), isAlternating);

    if (it != vec.end()) {
        std::cout << "Pattern violation between: " << *it << " and " << *(it + 1) 
                  << " at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No pattern violations found." << std::endl;
    }

    return 0;
}
