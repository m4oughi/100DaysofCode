#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers = {1, 2, 3};

    std::cout << "Size: " << numbers.size() << "\n";
    std::cout << "Is empty? " << (numbers.empty() ? "Yes" : "No") << "\n";

    return 0;
}
