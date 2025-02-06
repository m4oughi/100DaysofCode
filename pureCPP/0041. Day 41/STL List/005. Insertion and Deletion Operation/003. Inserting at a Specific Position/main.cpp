#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 40};

    auto it = myList.begin();
    std::advance(it, 2);  // Move iterator to 3rd position

    myList.insert(it, 30);  // Insert 30 at position 2

    std::cout << "List after insertion: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
