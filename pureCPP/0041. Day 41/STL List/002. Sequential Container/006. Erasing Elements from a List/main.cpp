#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};

    auto it = myList.begin();
    std::advance(it, 2);  // Move iterator to 3rd element (30)

    myList.erase(it);  // Erase element at the iterator

    std::cout << "List after deletion: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
