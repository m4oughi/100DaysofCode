#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    numbers.front() = 100;
    numbers.back() = 400;

    std::cout << "Modified front: " << numbers.front() << std::endl;
    std::cout << "Modified back: " << numbers.back() << std::endl;

    return 0;
}
