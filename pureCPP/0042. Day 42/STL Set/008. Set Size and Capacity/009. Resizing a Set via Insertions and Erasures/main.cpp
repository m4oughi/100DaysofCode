#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30};

    std::cout << "Initial size: " << numbers.size() << std::endl;

    numbers.insert(40);
    numbers.insert(50);

    std::cout << "Size after insertions: " << numbers.size() << std::endl;

    numbers.erase(20);
    numbers.erase(30);

    std::cout << "Size after deletions: " << numbers.size() << std::endl;

    return 0;
}
