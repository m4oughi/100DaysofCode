#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30, 20, 40, 20};

    myList.remove(20);  // Remove all occurrences of 20

    std::cout << "List after removal: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
