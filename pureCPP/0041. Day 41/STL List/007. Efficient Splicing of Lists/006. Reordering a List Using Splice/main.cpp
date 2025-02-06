#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    auto it = myList.begin();
    std::advance(it, 3);  // Move to element 4

    myList.splice(myList.begin(), myList, it);  // Move 4 to the front

    std::cout << "List after moving an element to front: ";
    for (int val : myList) std::cout << val << " ";

    return 0;
}
