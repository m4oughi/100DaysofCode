#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 50};

    auto it = myList.begin();
    std::advance(it, 2);  // Move iterator to the third element (30)

    myList.erase(it);  // Erase element at iterator

    std::cout << "List after deletion: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
