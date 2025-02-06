#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {50, 20, 40, 10, 30};

    myList.sort();  // Sort in ascending order
    std::cout << "Sorted list: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    myList.reverse();  // Reverse the list
    std::cout << "Reversed list: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
