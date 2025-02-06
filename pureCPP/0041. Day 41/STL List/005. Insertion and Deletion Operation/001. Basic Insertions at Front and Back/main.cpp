#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    myList.push_back(10);  // Insert at the end
    myList.push_front(5);  // Insert at the beginning
    myList.push_back(20);

    std::cout << "List after insertions: ";
    for (int val : myList) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
