#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 20, 30, 20};

    // Erase all occurrences of 20
    myList.remove(20);

    // Output the list after erase
    std::cout << "List after removing 20: ";
    for (int val : myList) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
