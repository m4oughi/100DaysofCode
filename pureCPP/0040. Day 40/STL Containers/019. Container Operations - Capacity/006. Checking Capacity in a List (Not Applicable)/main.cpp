#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3};

    // List does not support capacity() or reserve()
    std::cout << "List size: " << myList.size() << "\n"; // 3
    // No capacity() method for list

    return 0;
}
