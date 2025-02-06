#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {40, 10, 50, 20, 30};

    myList.sort();  // Sorts the list in ascending order

    std::cout << "Sorted list: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
