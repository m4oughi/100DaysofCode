#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {1, 2, 2, 3};

    std::cout << "Size of multiset: " << numbers.size() << "\n";
    std::cout << "Is multiset empty? " << (numbers.empty() ? "Yes" : "No") << "\n";

    return 0;
}
