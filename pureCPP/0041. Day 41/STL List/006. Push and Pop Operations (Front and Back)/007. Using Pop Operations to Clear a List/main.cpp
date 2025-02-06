#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};

    while (!myList.empty()) {
        std::cout << "Removing: " << myList.front() << std::endl;
        myList.pop_front();  // Keep removing front element
    }

    std::cout << "List is empty now, size: " << myList.size() << std::endl;

    return 0;
}
