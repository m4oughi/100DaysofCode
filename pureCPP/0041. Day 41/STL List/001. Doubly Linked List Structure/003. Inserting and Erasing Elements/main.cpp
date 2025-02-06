#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40};

    auto it = myList.begin();
    std::advance(it, 2);  // Move iterator to the 3rd element (30)

    myList.insert(it, 25);  // Insert 25 before 30

    std::cout << "List after insertion: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    myList.erase(it);  // Erase 30

    std::cout << "List after deletion: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
