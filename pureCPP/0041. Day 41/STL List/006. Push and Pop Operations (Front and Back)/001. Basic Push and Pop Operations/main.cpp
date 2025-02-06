#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    myList.push_back(10);  // Insert at the back
    myList.push_front(5);  // Insert at the front
    myList.push_back(20);  

    std::cout << "List after push operations: ";
    for (int val : myList) std::cout << val << " ";
    
    myList.pop_front();  // Remove first element
    myList.pop_back();   // Remove last element

    std::cout << "\nList after pop operations: ";
    for (int val : myList) std::cout << val << " ";

    return 0;
}
