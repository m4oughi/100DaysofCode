#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 10, 20, 20, 20, 30, 40, 40};

    myList.unique();  // Remove only consecutive duplicates

    std::cout << "List after unique operation: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
