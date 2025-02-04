#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // Check if the list is empty
    if (myList.empty()) {
        std::cout << "List is empty." << std::endl;  // Output: List is empty.
    } else {
        std::cout << "List is not empty." << std::endl;
    }

    return 0;
}
