#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    if (!myList.empty()) {
        myList.pop_front();  
    } else {
        std::cout << "List is empty! Cannot pop elements." << std::endl;
    }

    myList.push_back(10);
    myList.pop_front();  // Now it's safe to pop

    std::cout << "List size after operations: " << myList.size() << std::endl;

    return 0;
}
