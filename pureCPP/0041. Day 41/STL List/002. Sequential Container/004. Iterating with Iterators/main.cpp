#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    std::cout << "List elements using iterators: ";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
