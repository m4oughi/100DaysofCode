#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30};

    myList.pop_front();  // Remove first element
    myList.pop_back();   // Remove last element

    std::cout << "List after deletions: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
