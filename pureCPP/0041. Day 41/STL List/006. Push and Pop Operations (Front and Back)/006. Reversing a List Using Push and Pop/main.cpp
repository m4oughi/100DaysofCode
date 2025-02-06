#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};
    std::list<int> reversedList;

    while (!myList.empty()) {
        reversedList.push_back(myList.back());  // Take last element and push to new list
        myList.pop_back();
    }

    std::cout << "Reversed list: ";
    for (int val : reversedList) std::cout << val << " ";

    return 0;
}
