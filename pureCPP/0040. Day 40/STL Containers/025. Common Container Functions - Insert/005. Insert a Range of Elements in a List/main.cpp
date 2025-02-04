#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3};

    // Insert a range of elements {10, 20, 30} at the end of the list
    myList.insert(myList.end(), {10, 20, 30});

    // Output the list after insertion
    std::cout << "List after insert: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
