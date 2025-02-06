#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {100, 200, 300, 400, 500};

    std::list<int>::iterator first = myList.begin();
    std::list<int>::iterator last = --myList.end();  

    std::cout << "First element: " << *first << std::endl;
    std::cout << "Last element: " << *last << std::endl;

    return 0;
}
