#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    myList.assign(5, 10); // Assigns five elements with value 10

    std::cout << "List after assign: ";
    for (int num : myList) std::cout << num << " ";

    return 0;
}
