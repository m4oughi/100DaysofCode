#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    std::cout << "Removing front element: " << numbers.front() << std::endl;
    numbers.pop_front();

    std::cout << "Removing back element: " << numbers.back() << std::endl;
    numbers.pop_back();

    std::cout << "New front: " << numbers.front() << ", New back: " << numbers.back() << std::endl;

    return 0;
}
