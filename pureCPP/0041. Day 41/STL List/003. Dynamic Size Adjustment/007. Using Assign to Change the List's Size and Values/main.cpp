#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4};

    myList.assign(5, 100);  // Replace with five elements of value 100

    std::cout << "List after assign operation: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
