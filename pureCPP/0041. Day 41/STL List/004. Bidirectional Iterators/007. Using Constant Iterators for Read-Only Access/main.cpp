#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    std::cout << "Read-only traversal: ";
    for (std::list<int>::const_iterator it = myList.cbegin(); it != myList.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
