#include <iostream>
#include <list>

int main() {
    std::list<int> myList;
    
    myList.push_back(10);
    myList.push_front(5);
    myList.push_back(15);

    std::cout << "After push operations: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    myList.pop_front();
    myList.pop_back();

    std::cout << "After pop operations: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
