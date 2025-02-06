#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30};

    myList.resize(5, 100);  // Resize to 5 elements, new elements initialized to 100

    std::cout << "List after resizing: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    myList.resize(2);  // Reduce size to 2 elements

    std::cout << "List after reducing size: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
