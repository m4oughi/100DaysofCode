#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {100, 200, 300, 400};

    std::cout << "List elements: ";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
