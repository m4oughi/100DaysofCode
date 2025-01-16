#include <iostream>
#include <set>

int main() {
    std::multiset<int> numbers = {1, 2, 2, 3, 3, 3};

    std::cout << "Number of 2's: " << numbers.count(2) << "\n";
    std::cout << "Number of 3's: " << numbers.count(3) << "\n";

    return 0;
}
