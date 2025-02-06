#include <iostream>
#include <list>

void modifyList(std::list<int>& lst, size_t newSize, int value) {
    lst.resize(newSize, value);
}

int main() {
    std::list<int> myList = {1, 2, 3};

    modifyList(myList, 5, 42);  // Resize within a function

    std::cout << "Modified list: ";
    for (int num : myList) std::cout << num << " ";

    return 0;
}
