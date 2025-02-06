#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    std::cout << "Size before clearing: " << myList.size() << std::endl;

    myList.clear();  // Remove all elements

    std::cout << "Size after clearing: " << myList.size() << std::endl;

    return 0;
}
