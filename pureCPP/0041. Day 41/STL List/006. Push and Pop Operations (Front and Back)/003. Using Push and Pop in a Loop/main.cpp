#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    for (int i = 1; i <= 5; ++i) {
        myList.push_back(i * 10);  
    }

    std::cout << "List before popping elements: ";
    for (int val : myList) std::cout << val << " ";

    while (!myList.empty()) {
        myList.pop_front();  // Keep removing front element
    }

    std::cout << "\nList after popping all elements: " << myList.size() << std::endl;

    return 0;
}
