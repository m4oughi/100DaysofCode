#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    std::cout << "Size before clear: " << numbers.size() << std::endl;
    numbers.clear();
    std::cout << "Size after clear: " << numbers.size() << std::endl;

    return 0;
}
