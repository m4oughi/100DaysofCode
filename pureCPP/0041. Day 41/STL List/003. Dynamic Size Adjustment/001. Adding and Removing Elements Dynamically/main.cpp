#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // Dynamically adding elements
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);

    std::cout << "List after adding elements: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    // Dynamically removing elements
    myList.pop_front();
    myList.pop_back();

    std::cout << "List after removing elements: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
