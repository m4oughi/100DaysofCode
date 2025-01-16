#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3, 4, 5, 3};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
