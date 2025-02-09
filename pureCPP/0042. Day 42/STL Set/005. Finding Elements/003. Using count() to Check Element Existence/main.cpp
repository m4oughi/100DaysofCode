#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30};

    std::cout << "Count of 20: " << numbers.count(20) << std::endl;
    std::cout << "Count of 50: " << numbers.count(50) << std::endl;
    return 0;
}
