#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);
    myList.push_front(1);

    std::cout << "List after push operations: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
