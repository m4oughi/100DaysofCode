#include <iostream>
#include <set>

int main() {
    std::set<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Size before erasing: " << numbers.size() << std::endl;

    numbers.erase(30);
    numbers.erase(50);

    std::cout << "Size after erasing 30 and 50: " << numbers.size() << std::endl;

    return 0;
}
