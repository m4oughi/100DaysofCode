#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30};

    std::cout << "Initial list size: " << myList.size() << std::endl;

    myList.push_back(40);
    myList.push_front(5);

    std::cout << "Size after adding elements: " << myList.size() << std::endl;

    myList.pop_back();

    std::cout << "Size after removing an element: " << myList.size() << std::endl;

    return 0;
}
