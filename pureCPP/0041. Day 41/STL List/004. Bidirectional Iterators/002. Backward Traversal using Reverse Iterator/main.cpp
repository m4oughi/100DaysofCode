#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};

    std::cout << "Traversing list backward: ";
    std::list<int>::reverse_iterator rit;
    for (rit = myList.rbegin(); rit != myList.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    return 0;
}
