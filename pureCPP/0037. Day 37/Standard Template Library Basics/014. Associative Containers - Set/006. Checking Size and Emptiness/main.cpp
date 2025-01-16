#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {1, 2, 3};

    std::cout << "Size of set: " << numbers.size() << "\n";
    std::cout << "Is set empty? " << (numbers.empty() ? "Yes" : "No") << "\n";

    return 0;
}
