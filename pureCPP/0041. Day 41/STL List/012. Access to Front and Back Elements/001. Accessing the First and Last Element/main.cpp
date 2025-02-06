#include <iostream>
#include <list>

int main() {
    std::list<int> numbers = {10, 20, 30, 40};

    std::cout << "Front element: " << numbers.front() << std::endl;
    std::cout << "Back element: " << numbers.back() << std::endl;

    return 0;
}
