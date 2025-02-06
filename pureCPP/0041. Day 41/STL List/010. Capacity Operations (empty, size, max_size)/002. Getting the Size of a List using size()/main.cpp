#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "List size: " << numbers.size() << std::endl;

    numbers.push_back(6);
    numbers.push_back(7);

    std::cout << "Size after adding elements: " << numbers.size() << std::endl;

    return 0;
}
