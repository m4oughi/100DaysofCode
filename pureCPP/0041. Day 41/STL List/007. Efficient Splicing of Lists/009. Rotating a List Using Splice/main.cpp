#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    auto it = myList.begin();
    std::advance(it, 2);  // Move to element 3

    myList.splice(myList.end(), myList, myList.begin(), it);  // Rotate first 2 elements to end

    std::cout << "List after rotation: ";
    for (int val : myList) std::cout << val << " ";

    return 0;
}
