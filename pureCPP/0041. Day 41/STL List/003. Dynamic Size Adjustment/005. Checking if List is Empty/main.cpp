#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    if (myList.empty()) {
        std::cout << "List is empty" << std::endl;
    }

    myList.push_back(10);
    myList.push_back(20);

    if (!myList.empty()) {
        std::cout << "List is not empty. Size: " << myList.size() << std::endl;
    }

    return 0;
}
