#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    myList.assign(3, 100);  // Replace with three elements of value 100

    std::cout << "List after assign: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
