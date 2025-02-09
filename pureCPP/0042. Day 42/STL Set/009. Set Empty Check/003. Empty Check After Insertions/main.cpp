#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    std::cout << "Initially, empty: " << std::boolalpha << numbers.empty() << std::endl;

    numbers.insert(5);
    numbers.insert(15);

    std::cout << "After insertions, empty: " << numbers.empty() << std::endl;

    return 0;
}
