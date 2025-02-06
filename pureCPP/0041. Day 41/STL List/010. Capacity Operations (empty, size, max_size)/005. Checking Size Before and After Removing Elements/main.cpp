#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};

    std::cout << "Size before erasing: " << numbers.size() << std::endl;

    numbers.pop_back();  // Remove last element
    numbers.pop_front(); // Remove first element

    std::cout << "Size after removing elements: " << numbers.size() << std::endl;

    return 0;
}
