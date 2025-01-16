#include <iostream>
#include <list>
#include <iterator>

int main() {
    std::list<int> numbers = {10, 20, 30, 40, 50};
    std::list<int>::iterator it = numbers.begin();
    std::advance(it, 3); // Move iterator 3 steps forward

    std::cout << "Fourth element: " << *it << std::endl;
    return 0;
}
