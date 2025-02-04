#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {10, 20, 30};

    std::cout << "Before clear, size: " << myList.size() << std::endl;

    // Clear the list
    myList.clear();

    std::cout << "After clear, size: " << myList.size() << std::endl;  // Output: After clear, size: 0

    return 0;
}
