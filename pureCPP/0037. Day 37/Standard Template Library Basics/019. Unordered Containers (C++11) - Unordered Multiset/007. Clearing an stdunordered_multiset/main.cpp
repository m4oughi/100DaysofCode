#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3};

    numbers.clear();

    std::cout << "Size after clearing: " << numbers.size() << "\n";
    return 0;
}
