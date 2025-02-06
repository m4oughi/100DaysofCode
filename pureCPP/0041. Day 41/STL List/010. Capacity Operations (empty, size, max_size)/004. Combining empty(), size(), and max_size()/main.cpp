#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    std::cout << "Is list empty? " << (numbers.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Current size: " << numbers.size() << std::endl;
    std::cout << "Max size: " << numbers.max_size() << std::endl;

    numbers.push_back(100);
    std::cout << "After adding an element - Is list empty? " << (numbers.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
