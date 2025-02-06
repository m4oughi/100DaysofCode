#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 40, 30, 50};

    myList.remove(30);  // Remove all occurrences of 30

    std::cout << "List after removing 30: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
