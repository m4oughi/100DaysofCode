#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 40, 50};

    auto it = myList.begin();
    std::advance(it, 2);  // Move iterator to 3rd position

    myList.insert(it, 30);  // Insert 30 before 40

    std::cout << "List after insertion: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
