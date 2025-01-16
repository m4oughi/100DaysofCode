#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {1, 2, 3};

    std::cout << "Size: " << numbers.size() << "\n";
    std::cout << "Is empty? " << (numbers.empty() ? "Yes" : "No") << "\n";

    return 0;
}
